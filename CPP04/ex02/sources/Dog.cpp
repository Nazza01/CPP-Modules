/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:20:49 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/25 17:07:47 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain();

	std::cout << "Default Constructor called for Dog" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Dog::Dog(const Dog& other)
{
	*this = other;

	std::cout << "Copy Constructor called for Dog" << std::endl;
}

/**
 * @brief	OCF - Destructor
**/
Dog::~Dog(void)
{
	delete this->_brain;

	std::cout << "Destructor called for Dog" << std::endl;
}

/**
 * @brief	OCF - Copy Assignment Operator
**/
Dog&	Dog::operator=(const Dog &other)
{
	this->_type = other.getType();
	this->_brain = other.getBrain();

	std::cout << "Copy Assignment Operator called for Dog" << std::endl;
	return *this;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "Dog says borbark" << std::endl;
}

/* ************************************************************************** */
/* 								EX01 Functions 								  */
/* ************************************************************************** */


Brain	*Dog::getBrain(void) const
{
	return this->_brain;
}
