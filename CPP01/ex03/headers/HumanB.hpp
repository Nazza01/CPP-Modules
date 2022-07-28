/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:59:49 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/21 21:58:21 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	p_name;
	Weapon		*p_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif