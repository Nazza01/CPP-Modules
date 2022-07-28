/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:20:49 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/27 17:08:00 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();

	std::cout << "Default Constructor called for Cat" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Cat::Cat(const Cat& other)
{
	this->_brain = new Brain();
	*this = other;
	
	std::cout << "Copy Constructor called for Cat" << std::endl;
}

/**
 * @brief	OCF - Destructor
**/
Cat::~Cat(void)
{
	delete this->_brain;

	std::cout << "Destructor called for Cat" << std::endl;
}

/**
 * @brief	OCF - Assignment Operator
**/
Cat	&Cat::operator=(const Cat &other)
{
	this->Animal::operator=(other);

	this->_type = other.getType();
	*this->_brain = *other._brain;

	std::cout << "Copy Assignment Operator called for Cat" << std::endl;
	return *this;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "The Cat says meow" << std::endl;
}

/* ************************************************************************** */
/* 								EX01 Functions 								  */
/* ************************************************************************** */

Brain	*Cat::getBrain(void) const
{
	return this->_brain;
}
