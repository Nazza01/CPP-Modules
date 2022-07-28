/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:19:34 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/04 14:18:21 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

//	OCF Functions
	FragTrap(void);																//	Default Constructor
	FragTrap(const FragTrap& other);											//	Copy Constructor
	FragTrap&	operator=(const FragTrap &other);								//	Copy Assignment Constructor
	~FragTrap(void);															//	Default Destructor

//	EX02 Functions
	FragTrap(std::string name);
	void	attack(const std::string &target);
	void	highFivesGuys(void);

//	Extra Functions
	void	DisplayAllStats(void);
};

#endif
