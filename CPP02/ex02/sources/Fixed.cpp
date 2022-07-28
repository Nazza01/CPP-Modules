/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:26:15 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/30 17:02:18 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */
Fixed::Fixed(void)																//	Default Constructor
{
	this->value = 0;															//	Set the object's value to equal 0
}

Fixed::Fixed(const Fixed& other)												//	Copy Constructor
{
	*this = other;																//	Set the current object to be the parameter object
}

Fixed& Fixed::operator=(const Fixed& other)										//	Copy Assignment Constructor
{
	this->value = other.value;													//	Set the objects value using the other object's value (copy it over)
	return *this;																//	Return a pointer to the current object now that the value has been copied
}

Fixed::~Fixed(void)																//	Default Destructor
{
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

int		Fixed::getRawBits(void) const
{
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

/* ************************************************************************** */
/* 								EX01 Functions 								  */
/* ************************************************************************** */

Fixed::Fixed(int par)
{
	this->value = par << this->bits;
}

Fixed::Fixed(float nbr)
{
	this->value = (int)roundf(nbr * (1 << this->bits));
}

float		Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->bits));
}

int			Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}

/* ************************************************************************** */
/* 								EX02 Functions 								  */
/* ************************************************************************** */

/******				Operator Overloads					******/
/*			Comparison Overloads				*/

bool	Fixed::operator>(const Fixed &var)
{
	return (this->value > var.value);
}

bool	Fixed::operator<(const Fixed &var)
{
	return (this->value < var.value);
}

bool	Fixed::operator>=(const Fixed &var)
{
	return (this->value >= var.value);
}

bool	Fixed::operator<=(const Fixed &var)
{
	return (this->value <= var.value);
}

bool	Fixed::operator==(const Fixed &var)
{
	return (this->value == var.value);
}

bool	Fixed::operator!=(const Fixed &var)
{
	return (this->value != var.value);
}

/*			Arithmetic Overloads				*/

Fixed	Fixed::operator+(const Fixed &var)
{
	Fixed	res;

	res.setRawBits(this->value + var.value);
	return res;
}

Fixed	Fixed::operator-(const Fixed &var)
{
	Fixed	res;

	res.setRawBits(this->value - var.value);
	return res;
}

Fixed	Fixed::operator*(const Fixed &var)
{
	Fixed	res;

	res.setRawBits((float)this->value * var.value / (1 << this->bits));
	return res;
}

Fixed	Fixed::operator/(const Fixed &var)
{
	Fixed	res;

	res.setRawBits((float)this->value / var.value * (1 << this->bits));
	return res;
}

/*			Increment/Decrement Overloads		*/

Fixed	&Fixed::operator++(void)												//	Prefix increment operator (i++)
{
	this->value += 1;
	return *this;
}

Fixed	&Fixed::operator--(void)												//	Prefix decrement operator (i--)
{
	this->value -= 1;
	return *this;
}

Fixed	Fixed::operator++(int)													//	Postfix increment operator (++i)
{
	Fixed	res(*this);
	this->value += 1;
	return res;
}

Fixed	Fixed::operator--(int)													//	Postfix decrement operator (--i)
{
	Fixed	res(*this);
	this->value -= 1;
	return res;
}

/*			Min/Max Functions					*/

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
