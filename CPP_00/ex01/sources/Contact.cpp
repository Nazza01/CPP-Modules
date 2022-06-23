/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:02:34 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/13 11:50:40 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

/**
 * @brief	Sets the contact information based on the input type and the set_to
 * parameters
 * @param	type	The type to set (Firstname, Lastname, Nickname, Phonenumber, secret)
 * @param	set_to	The string to set the relevent infromation to
**/
void Contact::SetContact(std::string type, std::string set_to)
{
	if (type == "FirstName")
		this->FirstName = set_to;
	else if (type == "LastName")
		this->LastName = set_to;
	else if (type == "NickName")
		this->NickName = set_to;
	else if (type == "PhoneNumber")
		this->PhoneNumber = set_to;
	else if (type == "Secret")
		this->Secret = set_to;
}

/**
 * @brief	Obtains the Contact information based on the input type
 * @param	type	The value to check and return for
 * @return	Returns the relvent information type. otherwise returns ""
**/
std::string	Contact::GetContact(std::string type)
{
	if (type == "FirstName")
		return this->FirstName;
	else if (type == "LastName")
		return this->LastName;
	else if (type == "NickName")
		return this->NickName;
	else if (type == "PhoneNumber")
		return this->PhoneNumber;
	else if (type == "Secret")
		return this->Secret;
	else
		return "";
}

/**
 * @brief	Prints all contact information using the this keyword
**/
void	Contact::PrintContact(void)
{
	std::cout << "First Name: " << this->FirstName << std::endl;
	std::cout << "Last Name: " << this->LastName << std::endl;
	std::cout << "Nickname: " << this->NickName << std::endl;
	std::cout << "Phone Number: " << this->PhoneNumber << std::endl;
	std::cout << "Secret: " << this->Secret << std::endl;
}

/**
 * @brief	Returns a bool check against the first name entry.
 * @return	Returns either true if the FirstName entry in the current contact is
 * empty, otherwise will return false if it contains information
**/
bool	Contact::IsEmpty(void)
{
	return (this->FirstName.empty());
}
