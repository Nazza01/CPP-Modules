/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:17 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:45:14 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */
WrongAnimal::WrongAnimal(void): _type("")													//	Default Constructor
{
	std::cout << "WrongAnimal is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)												//	Copy Constructor
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)									//	Copy Assignment Constructor
{
	std::cout << "Copy assignment operator for WrongAnimal called" << std::endl;
	this->_type = other.getType();
	return *this;
}

WrongAnimal::~WrongAnimal(void)															//	Default Destructor
{
	std::cout << "WrongAnimal is going to sleep" << std::endl;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "The WrongAnimal goes AAAAAA" << std::endl;
}
