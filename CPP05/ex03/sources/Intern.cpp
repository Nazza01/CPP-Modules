/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:12:41 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/31 00:53:16 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF	- Default Constructor
**/
Intern::Intern(void)
{
	std::cout << "Default Constructor for Intern called" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Intern::Intern(const Intern &other)
{
	std::cout << "Copy Constructor for Intern called" << std::endl;
	*this = other;
}

/**
 * @brief	OCF - Destructor
**/
Intern::~Intern(void)
{
	std::cout << "Intern is no more" << std::endl;
}

/**
 * @brief	OCF - Copy Assignment Operator
**/
Intern		&Intern::operator=(const Intern &other)
{
	std::cout << "Copy Assignment Operator for Intern called" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

Form		*Intern::makeForm(std::string request, std::string target)
{
	Form *result = NULL;
	t_form	formtypes[3] = {
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "presidential pardon", new PresidentialPardonForm(target) }
	};

	for (int i = 0; i < 3; i++)
	{
		if (formtypes[i].namecmp == request)
			result = formtypes[i].fclass;
		else
			delete formtypes[i].fclass;
	}
	
	if (result != NULL)
		std::cout << "Intern created the form " << request << std::endl;
	else
		std::cout << "Intern could not find the form " << request << std::endl;

	return result;
}
