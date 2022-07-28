/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:20:49 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:45:50 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

WrongCat::WrongCat(void)
{
	std::cout << "The WrongCat is now annoyed and awake" << std::endl;
	this->_type = "WrongCat";
	
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "The WrongCat is going to back to sleep" << std::endl;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

void	WrongCat::makeSound(void) const
{
	std::cout << "The WrongCat goes: meep" << std::endl;
}
