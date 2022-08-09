/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:24:02 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:44:46 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form Default Constructor called" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	std::cout << "Presidential Pardon Form Copy Constructor called" << std::endl;
	*this = other;
}

/**
 * @brief	OCF - Destructor
**/
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form Destructor called" << std::endl;
}

/**
 * @brief	OCF - Assignment Operator
**/
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "Presidential Pardon Assignment Operator called" << std::endl;
	this->SetSignedStatus(other.GetSignedStatus());
	this->SetExecuteStatus(other.GetExecutedStatus());
	this->SetTarget(other.GetTarget());
	return *this;
}

/* ************************************************************************** */
/* 								EX02 Functions 								  */
/* ************************************************************************** */

/**
 * @brief	Uses the base Form class to make the presidential pardon form with
 * the pdf requirements (Sign 25, Exec 5)
 * @param	target	The target to assign to the form
**/
PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form::Form("PresidentialPardonForm", 25, 5)
{
	this->SetTarget(target);
}

void		PresidentialPardonForm::doAction(void) const
{
	std::cout << this->GetTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
