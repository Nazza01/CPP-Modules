/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:24:02 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:44:49 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout << "Robotomy Request Form Default Constructor called" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	std::cout << "Robotomy Request Form Copy Constructor called" << std::endl;
	*this = other;
}

/**
 * @brief	OCF - Destructor
**/
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Request Form Destructor called" << std::endl;
}

/**
 * @brief	OCF - Assignment Operator
**/
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "Robotomy Request Form Assignment Operator called" << std::endl;
	this->SetSignedStatus(other.GetSignedStatus());
	this->SetExecuteStatus(other.GetExecutedStatus());
	this->SetTarget(other.GetTarget());
	return *this;
}

/* ************************************************************************** */
/* 								EX02 Functions 								  */
/* ************************************************************************** */

/**
 * @brief	Uses the base Form class to make the Robotomy Request Form with the
 * pdf requirements (Sign 72, Exec 45)
 * @param	target	The target to assign to the form
**/
RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form::Form("RobotomyRequestForm", 72, 45)
{
	this->SetTarget(target);
}

void		RobotomyRequestForm::doAction(void) const
{
	std::cout << "* DRILLING NOISES INTENSIFIES *" << std::endl;
	if (std::rand() % 2 == 0)
	{
		std::cout << this->GetTarget() << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "The robotomy has failed" << std::endl;
	}
}
