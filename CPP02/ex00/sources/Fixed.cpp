/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:23:37 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/24 22:40:28 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/* ************************************************************************** */
/* 								Public Functions 							  */
/* ************************************************************************** */
Fixed::Fixed( void )															//	Default Constructor
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;															//	Set the object's value to equal 0
}

Fixed::Fixed( const Fixed& other)												//	Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();												//	Set the objects value using the getRawBits member function
}

Fixed& Fixed::operator=( const Fixed& other)									//	Copy Assignment Constructor
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.getRawBits();												//	Set the objects value using the getRawBits member function
	return (*this);																//	Return a pointer to the current object now that the value has been copied
}

Fixed::~Fixed( void )															//	Default Destructor
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const												//	getRawBits member function
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);														//	Returns the current objects' value using this keyword
}

void	Fixed::setRawBits( int const raw)										//	setRawBits member function
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;															//	Sets the current objects' value to equal raw
}
