/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:20:49 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:43:57 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

Dog::Dog(void)																	//	Default Constructo
{
	std::cout << "Dog has been woken up and wags its tail" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& other)														//	Copy Constructor
{
	*this = other;
}

Dog&	Dog::operator=(const Dog &other)										//	Copy Assignment Constructor
{
	this->_type = other._type;
	return *this;
}

Dog::~Dog(void)																	//	Default Destructor
{
	std::cout << "Dog is going back to sleep" << std::endl;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "Dog says borbark" << std::endl;
}
