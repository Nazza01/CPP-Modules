/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:27:00 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/01 11:54:27 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string zombName;

public:
	Zombie(std::string name);
	~Zombie(void);
	void		announce( void );
	std::string	setProperty( std::string prop, std::string setTo);
	std::string	getProperty( std::string prop );
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

#endif