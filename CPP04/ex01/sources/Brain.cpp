/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:17 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/25 16:54:46 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
Brain::Brain(void)
{
	std::cout << "Default Constructor called for Brain" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Brain::Brain(const Brain& other)
{
	*this = other;

	std::cout << "Copy Constructor called for Brain" << std::endl;
}

/**
 * @brief	OCF - Destructor
**/
Brain::~Brain(void)
{
	std::cout << "Destructor called for Brain" << std::endl;
}

/**
 * @brief	OCF - Copy Assignment Operator
**/
Brain& Brain::operator=(Brain const &other)
{
	for (int i = 0; i < Brain::numIdeas; i++)
		this->_ideas[i] = other._ideas[i];

	std::cout << "Copy Assignment Operator called for Brain" << std::endl;
	return *this;
}
