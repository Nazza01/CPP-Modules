/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:38:21 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/24 20:57:15 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* ************************************************************************** */
/* 								Private Functions							  */
/* ************************************************************************** */

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
	"pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You "
	<< "didn't put enough bacon in my burger! If you did, I wouldn't be asking "
	<< "for more!" << std::endl;

}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've "
	<< "been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}
/* ************************************************************************** */
/* 								Public Functions							  */
/* ************************************************************************** */

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string choice)
{
	int			i = 0;															//	The index to start off at
	std::string	level[4] = {													//	Defines the four levels of information to compare it to
		"debug",
		"info",
		"warning",
		"error"
	};
	void 		(Harl::*functLevel[4])(void) = {								//	Defines the pointer to member functions that is an array containing all four private functions
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	while (i < 4)
	{
		if (level[i] == choice)													//	Iterate through each level and checking if the choice equals it
		{
			(this->*functLevel[i])();											//	Use the this-> pointer based on the object that is calling it, while iterating through each function
			return ;
		}
		i++;
	}
}
