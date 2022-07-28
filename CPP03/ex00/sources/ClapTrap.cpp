/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:17 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/04 13:56:42 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */
ClapTrap::ClapTrap(void)														//	Default Constructor
{
	this->_name = "Default";
	this->_hp = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)										//	Copy Constructor
{
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)							//	Copy Assignment Constructor
{
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_attack = other._attack;
	return *this;
}

ClapTrap::~ClapTrap(void)														//	Default Destructor
{
	std::cout << this->_name << " is no more." << std::endl;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */


ClapTrap::ClapTrap(std::string name)											//	Default Constructor (passes string)
{
	this->_name = name;
	this->_hp = 10;
	this->_energy = 10;
	this->_attack = 0;
	std::cout << "Meet the: " << this->_name << std::endl;
	std::cout << "Starting Stats" << std::endl;
	this->DisplayAllStats();
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp <= 0 || this->_energy <= 0)
		std::cout << this->_name << " is out of HP or Energy!" << std::endl;
	else
	{
		this->_energy -= 1;
		std::cout << this->_name << " attacks " << target << ", causing "
			<< this->_attack << " point of damage!" << std::endl;
		this->DisplayAllStats();
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0 || this->_energy <= 0)
	{
		std::cout << this->_name << " has no health left! :(" << std::endl;
		std::cout << this->_name << " has died" << std::endl;
	}
	else
	{
		this->_hp -= amount;
		std::cout << this->_name << " takes a whopping " << amount << " damage!" << std::endl;
		this->DisplayAllStats();
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0 || this->_energy <= 0)
	{
		std::cout << this->_name << " cannot be repaired as they have no energy points left" << std::endl;
	}
	else
	{
		std::cout << this->_name << " is attempting to repair" << std::endl;
		if (this->_hp == 10)
		{
			std::cout << this->_name << " currently has full health!" << std::endl;
		}
		else
		{
			this->_hp += amount;
			this->_energy -= 1;
		}
		this->DisplayAllStats();
	}
}

/* ************************************************************************** */
/* 								Extra Functions 								  */
/* ************************************************************************** */

void	ClapTrap::DisplayAllStats(void)
{
	std::cout << "\tHit Points:\t" << this->_hp << "/" << MAX_HP << std::endl;
	std::cout << "\tEnergy Points:\t" << this->_energy << "/" << MAX_EP << std::endl;
	std::cout << "\tAttack Damage:\t" << this->_attack << "/" << MAX_AD << std::endl;
}
