/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:58:40 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/21 22:23:04 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}

Weapon::~Weapon(void) 
{
};

std::string	Weapon::getType(void) const
{
	return (p_type);
}

void	Weapon::setType(const std::string &weapon)
{
	p_type = weapon;
}
