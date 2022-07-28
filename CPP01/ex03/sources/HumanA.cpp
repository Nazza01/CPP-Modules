/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:58:34 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/21 22:00:54 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): p_weapon(weapon)
{
	this->p_name = name;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->p_name << " attacks with their " << this->p_weapon.getType() << std::endl;
}
