/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:29:30 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/13 17:44:15 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying zombie: " << this->getProperty("name") << std::endl;
}

std::string	Zombie::setProperty( std::string prop, std::string setTo)
{
	if (prop == "name")
		return (this->zombName = setTo);
	else
		return ("");
}

std::string	Zombie::getProperty( std::string prop )
{
	if (prop == "name")
		return (this->zombName);
	else
		return ("");
}

void	Zombie::announce( void )
{
	std::cout << "\t" << this->getProperty("name") << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
