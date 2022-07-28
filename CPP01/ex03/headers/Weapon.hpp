/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:59:00 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/20 18:55:45 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define	WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	p_type;

public:
	Weapon(const std::string &weapon);
	~Weapon(void);

	std::string	getType(void) const;
	void		setType(const std::string &weapon);
};

#endif