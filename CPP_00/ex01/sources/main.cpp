/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:08:54 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/13 11:51:50 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	Helperfunction(void)
{
	std::cout << "The following commands are available\n";
	std::cout << "[COMMAND / Shorthand]:\tDescription\n";
	std::cout << std::endl;
	std::cout << "[HELP / H / h]\t\tPrints this help prompt\n";
	std::cout << "[ADD / A / a]\t\tAdd Mode: prompts to add a contact to the phonebook\n";
	std::cout << "[SEARCH / S / s]\tSearch Mode: prompts to search for a contact\n";
	std::cout << "[PRINT / print / p]\tPrint Mode: Prints the contact list without searching\n";
	std::cout << "[EXIT / E / e / q]\tExit Mode: Exits the program cleanly\n";
}

int main(void)
{
	PhoneBook	pb;
	std::string	prompt;

	std::cout << "Weclome to the 80's phonebook!\n";
	std::cout << "Now written in c++ for my convenience!\n";
	Helperfunction();
	while (true)
	{
		std::cout << "80S PHONEBOOK> ";
		if (std::getline(std::cin, prompt).eof())
			std::exit(0);
		if (prompt == "HELP" || prompt == "H" || prompt == "h")
			Helperfunction();
		else if (prompt == "ADD" || prompt == "A" || prompt == "a")
			pb.AddContact();
		else if (prompt == "SEARCH" || prompt == "S" || prompt == "s")
			pb.SearchContact();
		else if (prompt == "EXIT" || prompt == "E" || prompt == "e" || prompt == "q")
			break;
		else if (prompt == "PRINT" || prompt == "print" || prompt == "p")
		{
			std::cout.flags(std::ios::right);
			std::cout << std::setw(10) << "INDEX";	
			std::cout.fill(' ');	std::cout << "|";
			std::cout << std::setw(10) << "FIRST NAME";
			std::cout.fill(' ');	std::cout << "|";
			std::cout << std::setw(10) << "LAST NAME";
			std::cout.fill(' ');	std::cout << "|";
			std::cout << std::setw(10) << "NICKNAME";
			std::cout.fill(' ');	std::cout << "|";
			std::cout << std::endl;
			pb.PrintAllSavedContacts();
			std::cout << std::endl;
		}
	}
	std::cout << "We at [COMPANY_NAME] would like to thank you for using [SOFTWARE_TITLE]\n";
	return (0);
}
