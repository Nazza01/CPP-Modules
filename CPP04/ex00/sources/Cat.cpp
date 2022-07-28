/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:20:49 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:43:07 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

Cat::Cat(void)
{
	std::cout << "The Cat is now annoyed and awake" << std::endl;
	this->_type = "Cat";
	
}

Cat::Cat(const Cat& other)
{
	*this = other;
}

Cat&	Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "The Cat is going to back to sleep" << std::endl;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "The Cat says maow" << std::endl;
}
