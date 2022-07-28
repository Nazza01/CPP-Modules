/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:26:15 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/26 15:38:20 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */
Fixed::Fixed(void)																//	Default Constructor
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;															//	Set the object's value to equal 0
}

Fixed::Fixed(const Fixed& other)												//	Copy Constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;																//	Set the current object to be the parameter object
}

Fixed& Fixed::operator=(const Fixed& other)										//	Copy Assignment Constructor
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;													//	Set the objects value using the other object's value (copy it over)
	return (*this);																//	Return a pointer to the current object now that the value has been copied
}

Fixed::~Fixed(void)																//	Default Destructor
{
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

int		Fixed::getRawBits(void) const
{
	return (this->value);														//	Returns 'value' from the current object
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;															//	Uses this keyword to set value to the raw parameter
}

/* ************************************************************************** */
/* 								EX01 Functions 								  */
/* ************************************************************************** */

Fixed::Fixed(const int par)														//	Fixed Constructor that takes in a const int par
{
	std::cout << "Int constructor called" << std::endl;
	this->value = par << this->bits;											//	Shifts the integer part by 8 bits to the left to keep the decimal portion
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(nbr * (256));										//	Rounds the float up to an int and multiplies to the opposite of the below
}

float		Fixed::toFloat(void) const
{
																				//	Equivalent of doing (float)this->value / (1 << this->bits)
	return ((float)this->value / 256);											//	as the (1 << this->bits) is always the same it will be constant all across the program
}

int			Fixed::toInt(void) const
{
	return (this->value >> this->bits);											//	Bitwise shifting to the right to get rid of each decimal point
}

std::ostream& operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}
