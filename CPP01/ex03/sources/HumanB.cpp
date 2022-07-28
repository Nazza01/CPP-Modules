/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:58:25 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/21 22:21:38 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->p_name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->p_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->p_name << " attacks with their " << this->p_weapon->getType() << std::endl;
}
