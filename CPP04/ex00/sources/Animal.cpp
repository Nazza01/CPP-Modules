/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:17 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:30:45 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */
Animal::Animal(void): _type("")													//	Default Constructor
{
	std::cout << "Generic Animal is called" << std::endl;
}

Animal::Animal(const Animal& other)												//	Copy Constructor
{
	std::cout << "Copy constructor for Generic Animal called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)									//	Copy Assignment Constructor
{
	std::cout << "Copy assignment operator for Generic Animal called" << std::endl;
	this->_type = other.getType();
	return *this;
}

Animal::~Animal(void)															//	Default Destructor
{
	std::cout << "Generic Animal is going to sleep" << std::endl;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Generic Animal is making noise" << std::endl;
}
