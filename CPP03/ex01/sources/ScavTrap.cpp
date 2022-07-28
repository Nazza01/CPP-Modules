/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 00:47:20 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/04 14:11:11 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void)														//	Default Destructor
{
	std::cout << "ST\t" << this->_name << " is no more." << std::endl;
}

/* ************************************************************************** */
/* 								EX01 Functions 								  */
/* ************************************************************************** */
ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ST\tMeet the: " << this->_name << std::endl;
	std::cout << "ST\tStarting Stats" << std::endl;
	this->DisplayAllStats();
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp <= 0 || this->_energy <= 0)
		std::cout << "ST\t" << this->_name << " is out of HP or Energy!" << std::endl;
	else
	{
		this->_energy -= 1;
		std::cout << "ST\t" << this->_name << " attacks " << target << ", causing "
			<< this->_attack << " point of damage!" << std::endl;
		this->DisplayAllStats();
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ST\t" << this->_name << " is now in Gatekeeper mode" << std::endl;
}

/* ************************************************************************** */
/* 								Extra Functions 								  */
/* ************************************************************************** */

void	ScavTrap::DisplayAllStats(void)
{
	std::cout << "ST\t" << "\tHit Points:\t" << this->_hp << std::endl;
	std::cout << "ST\t" << "\tEnergy Points:\t" << this->_energy << std::endl;
	std::cout << "ST\t" << "\tAttack Damage:\t" << this->_attack << std::endl;
}
