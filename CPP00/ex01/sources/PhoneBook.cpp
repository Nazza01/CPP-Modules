/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:30:29 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/13 11:47:35 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief	Constructor for phonebook class
 * Intiailizes ContactIndex to 0
**/
PhoneBook::PhoneBook(void)
{
	ContactIndex = 0;
}

PhoneBook::~PhoneBook(void)
{
}

/**
 * @brief	Adds the contact using the contact classes' SetContact function
 * Uses an algorithm so the total amount of contacts will wrap around back to
 * the start if the end is detected:
 * if ContactIndex is 7 then it will wrap back to 1 as (7 + 1) % 8 = 0
**/
void PhoneBook::AddContact(void)
{
	std::cout << "Please enter the details for the new contact" << std::endl;
	contact[ContactIndex].SetContact("FirstName", InputFormat("First Name:"));
	contact[ContactIndex].SetContact("LastName", InputFormat("Last Name:"));
	contact[ContactIndex].SetContact("NickName", InputFormat("Nickname:"));
	contact[ContactIndex].SetContact("PhoneNumber", InputFormat("Phone Number:"));
	contact[ContactIndex].SetContact("Secret", InputFormat("Secret:"));
	ContactIndex = (ContactIndex + 1) % TOTAL_CONTACTS;
	std::cout << "Contact has been added!" << std::endl;
}

/**
 * @brief	Prints the title and current saved contacts
 * Keeps asking for input until either we cancel the search using 'c' or printed
 * the contacts successfully.
**/
void	PhoneBook::SearchContact(void)
{
	PrintTitle();
	PrintAllSavedContacts();
	while (true)
	{
		std::string	choice;

		std::cout << "Which index would you like to search for? Between 0 to 7\n";
		std::cout << "Type c if you would like to cancel\n";
		std::cout << "SEARCH> ";
		if (std::getline(std::cin, choice).eof())
			std::exit(0);
		if (choice == "c")
			break ;
		else if ((choice.length() == 1) && ('0' <= choice[0]) && (choice[0] <= '7') \
			&& (!contact[choice[0] - '0'].IsEmpty()))
		{
			contact[choice[0] - '0'].PrintContact();
			break;
		}
	}
}

/**
 * @brief	Prints all of the contacts in the contact list by using GetContact()
 * to obtain relevant information
**/
void	PhoneBook::PrintAllSavedContacts(void)
{
	for (int i = 0; (i < TOTAL_CONTACTS && !contact[i].IsEmpty()); ++i)
	{
		FormatColumns(i);
		FormatColumns(contact[i].GetContact("FirstName"));
		FormatColumns(contact[i].GetContact("LastName"));
		FormatColumns(contact[i].GetContact("NickName"));
		std::cout << std::endl;
	}
}

/**
 * @brief	Formats the input using getline EOF checker so we can get an entire
 * line worth of content which also gets the spaces in the input
 * @param	output	The string to output before accepting input
 * @return	Returns the input back to the function that it was called from
**/
std::string	PhoneBook::InputFormat(std::string output)
{
	std::string input;

	while (input.empty())
	{
		std::cout << output << '\t' << std::endl;
		if (std::getline(std::cin, input).eof())
			std::exit(0);
	}
	return (input);
}

/**
 * @brief	Formats the columns properly for the search and print functions
 * @param	toput	The string content for that column to be printed
 * If the length of the string is over 10, the string is truncated and a . is
 * printed instead to signify that there is more content for that column
 * If the length of the string is less than 10 then the string is printed 
 * normally with ' ' padding as needed
**/
void	PhoneBook::FormatColumns(std::string toput)
{
	std::cout.flags(std::ios::right);
	if (toput.length() > 10)
	{
		std::cout << toput.substr(0, 9);
		std::cout << ".";
		std::cout << "|";
	}
	else
	{
		std::cout << std::setw(10) << toput;
		std::cout.fill(' ');
		std::cout << "|";
	}
}

/**
 * @brief	Integer Function overload version of FormatColumns
 * @param	toput	The integer content for that column to be printed
**/
void	PhoneBook::FormatColumns(int toput)
{
	std::cout.flags(std::ios::right);
	std::cout << std::setw(10) << toput;
	std::cout.fill(' ');
	std::cout << "|";
}

/**
 * @brief	Uses the FormatColumns function to output the titles of the table
 * properly without casung much fuss
 * Outputs a newline char at the end for readability.
**/
void	PhoneBook::PrintTitle(void)
{
	FormatColumns("INDEX");
	FormatColumns("FIRST NAME");
	FormatColumns("LAST NAME");
	FormatColumns("NICKNAME");
	std::cout << std::endl;
}
