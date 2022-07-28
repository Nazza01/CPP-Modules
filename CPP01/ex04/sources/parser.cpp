/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:30:58 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/24 18:14:19 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedloser.hpp"

static std::string DoReplacement(std::string line, std::string s1, std::string s2)
{
	std::string				result;
	std::string::size_type	line_pos = 0;
	std::string::size_type	i;

	//	Attempt to find the string s1 within the line until end of the file
	while ((i = line.find(s1, line_pos)) != std::string::npos)
	{
		line.erase(i, s1.length());												//	Erase what is at line i
		line.insert(i, s2);														//	Insert the contents of s2
		line_pos = i + s2.length();												//	Set the next find pos to be new len
	}
	return (line);
}

void	parser(std::string fn, std::string file, std::string s1, std::string s2)
{
	std::string				test_path = "test/";								//	Test path
	std::string				res_path = "result/";								//	Result path
	test_path += file;															//	Prefix with test path
	std::ifstream			infile(test_path);									//	Input file stream
	std::ofstream			outfile;											//	Output file stream
	std::string				line;												//	Line of file

	res_path += file.append(".replace");										//	Prefix with result path & append
	if (!infile.is_open())
	{
		std::cerr << "Could not open " << fn << "\n";
		std::cerr << "Please make sure the file exists in the test folder\n";
	}
	else
	{
		outfile.open(res_path, std::ofstream::out | std::ofstream::trunc);		//	Open with truncation (overwrite contents if file exists)
		while (true)
		{
			std::getline(infile, line);											//	Get the whole line
			outfile << DoReplacement(line, s1, s2);								//	Assign the result of DoReplacement to the new file
			if (infile.eof())													//	If EOF is detected, break the true loop
				break;
			outfile << std::endl;												//	Insert a newline chararacter into the new file
		}
	}
	outfile.close();															//	Close the output file
	infile.close();																//	Close the input file
}
