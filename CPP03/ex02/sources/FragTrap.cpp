/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:24:12 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/04 14:19:51 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(void)
{
	std::cout << "FT\t" << this->_name << " is no more." << std::endl;
}

/* ************************************************************************** */
/* 								EX02 Functions 								  */
/* ************************************************************************** */

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_attack = 30;

	std::cout << "FT\tMeet the: " << this->_name << std::endl;
	std::cout << "FT\tStarting Stats" << std::endl;
	this->DisplayAllStats();
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_hp <= 0 || this->_energy <= 0)
		std::cout << "FT\t" << this->_name << " is out of HP or Energy!" << std::endl;
	else
	{
		this->_energy -= 1;
		std::cout << "FT\t" << this->_name << " attacks " << target << ", causing "
			<< this->_attack << " point of damage!" << std::endl;
		this->DisplayAllStats();
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FT\t+HighFivesRequest: Approved" << std::endl;
	std::cout << "FT\t+HighFivesRequest: Initiating Highest of Fives" << std::endl;
	std::cout << "FT\t+HighFivesRequest: Completed" << std::endl;
	std::cout << "FT\t+HighFivesRequest: Thankyou" << std::endl;
}

/* ************************************************************************** */
/* 								Extra Functions 								  */
/* ************************************************************************** */
void	FragTrap::DisplayAllStats(void)
{
	std::cout << "FT\t" << "\tHit Points:\t" << this->_hp << std::endl;
	std::cout << "FT\t" << "\tEnergy Points:\t" << this->_energy << std::endl;
	std::cout << "FT\t" << "\tAttack Damage:\t" << this->_attack << std::endl;
}
