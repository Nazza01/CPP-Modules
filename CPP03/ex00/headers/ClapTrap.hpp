/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:24 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/04 14:00:50 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

#define	MAX_HP	10
#define	MAX_EP	10
#define	MAX_AD	10

class ClapTrap
{
protected:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_attack;

public:
//	OCF	Functions
	ClapTrap(void);																//	Default Constructor
	ClapTrap(const ClapTrap& other);											//	Copy Constructor
	ClapTrap&	operator=(const ClapTrap &other);								//	Copy Assignment Constructor
	~ClapTrap(void);															//	Default Destructor

//	EX00 Functions
	ClapTrap(std::string name);													//	Default Constructor (passes string)
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

// 	Extra Functions
	void	DisplayAllStats(void);
};

#endif
