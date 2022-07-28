/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 00:46:39 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/04 14:11:21 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

//	OCF Functions
	ScavTrap(void);																//	Default Constructor
	ScavTrap(const ScavTrap& other);											//	Copy Constructor
	ScavTrap&	operator=(const ScavTrap &other);								//	Copy Assignment Constructor
	~ScavTrap(void);															//	Default Destructor

//	EX01 Functions
	ScavTrap(std::string name);
	void	attack(const std::string &target);
	void	guardGate(void);

//	Extra Functions
	void	DisplayAllStats(void);
};

#endif
