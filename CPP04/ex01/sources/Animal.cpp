/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:17 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/25 17:08:24 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
Animal::Animal(void): _type("")
{
	std::cout << "Default Constructor called for Animal" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Animal::Animal(const Animal& other)
{
	*this = other;

	std::cout << "Copy Constructor called for Animal" << std::endl;
}

/**
 * @brief	OCF - Destructor
**/
Animal::~Animal(void)
{
	std::cout << "Destructor called for Animal" << std::endl;
}

/**
 * @brief	OCF - Copy Assignment Operator
**/
Animal	&Animal::operator=(const Animal &other)
{
	this->_type = other._type;

	std::cout << "Copy Assignment Operator called for Animal" << std::endl;
	return *this;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */
const std::string	&Animal::getType(void) const
{
	return this->_type;
}
