/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:10:42 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/04 11:35:30 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

#include <iostream>
#include <climits>
#include <stdlib.h>					//	For valgrind errors (atoi/atof)

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF	- Default Constructor
**/
Scalar::Scalar(void)
{
	if (Scalar::verbose)
		std::cout << "Default constructor for Scalar called" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Scalar::Scalar(const Scalar &other)
{
	if (Scalar::verbose == true)
		std::cout << "Copy constructor for Scalar called" << std::endl;
	*this = other;
}


/**
 * @brief	OCF - Destructor
**/
Scalar::~Scalar(void)
{
	if (Scalar::verbose == true)
		std::cout << "Scalar is no more" << std::endl;
}

/**
 * @brief	OCF - Copy Assignment Operator
**/
Scalar	&Scalar::operator=(const Scalar &other)
{
	if (Scalar::verbose == true)
		std::cout << "Copy assignment operator for Scalar called" << std::endl;
	(void)other;
	return *this;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

void	Scalar::convert(const std::string &literal)
{
	std::string	con_chr = "";
	int			con_int = 0;
	float		con_flo = 0;
	double		con_dbl = 0;
	std::string	specialType[6] = {
		"-inff", 	"+inff", 	"nanf",
		"-inf", 	"+inf", 	"nan"
	};

	// If char, then output like normal
	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		con_chr = literal[0];
		std::cout << "char: " << con_chr << std::endl;
		std::cout << "int: " << static_cast<int>(con_chr[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(con_chr[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(con_chr[0]) << ".0" << std::endl;
		return;
	}
	// If a number, convert to a c_str
	con_int = std::atoi(literal.c_str());
	
	// If it is a float
	// 	Convert using atof, then use static cast to remove everything after the decimal:
	// 	if con_flo is 3.5, then using static_cast<double>(con_flo) will turn it into 3
	// 	This is a problem if presicion is involved but we aren't worrying about that yet.
	if (literal[literal.length() - 1] == 'f')
	{
		con_flo = std::atof(literal.c_str());
		con_dbl = static_cast<double>(con_flo);
	}
	else
	{
		con_dbl = std::atof(literal.c_str());
		con_flo = static_cast<float>(con_dbl);
	}

	//	Check for any special types, if they are detected store impossible as the result
	for (int i = 0; i < 6; i++)
	{
		if (literal == specialType[i])
		{
			con_chr = "impossible";
			break;
		}
	}

	// Check if the char hasn't been converted yet
	if (con_chr == "" && std::isprint(con_int))
	{
		con_chr = "'";
		con_chr += static_cast<char>(con_int);
		con_chr += "'";
	}
	else if (con_chr == "")
	{
		con_chr = "Non displayable";
	}
	
	std::cout << "char: " << con_chr << std::endl;
	
	if (con_chr == "impossible")
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << con_int << std::endl;
	}

	//	If the converted character is impossible and the float conversion is
	//	still not converted, then output impossible for both cases
	if (con_chr == "impossible" && con_flo == 0)
	{
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	//	If the converted character is not impossible and the float remainder (.0)
	// 	isnt 0, then append ".0" for double and ".0f" for float
	else
	{
		if (con_chr != "impossible" && con_flo - static_cast<int>(con_flo) == 0)
		{
			std::cout << "float: " << con_flo << ".0f" << std::endl;
			std::cout << "double: " << con_dbl << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << con_flo << "f" << std::endl;
			std::cout << "double: " << con_dbl << std::endl;
		}
	}
}

//	For debugging
bool Scalar::verbose = false;