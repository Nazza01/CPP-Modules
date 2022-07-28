/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:54:06 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/13 11:47:37 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

#define TOTAL_CONTACTS 8

class PhoneBook
{
	private:
	Contact	contact[8];
	int		ContactIndex;

	std::string	InputFormat(std::string output);
	void		FormatColumns(std::string toput);
	void		FormatColumns(int toput);
	void		PrintSpecificContact(std::string atIndex);
	void		PrintTitle(void);

	public:
	PhoneBook(void);
	~PhoneBook(void);
	void		AddContact(void);
	void		SearchContact(void);
	void		PrintAllSavedContacts(void);
};

#endif
