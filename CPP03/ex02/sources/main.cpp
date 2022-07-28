/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:14:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/03 16:34:34 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	{
		FragTrap	frtp1("FragTrap");
	
		frtp1.attack("AnotherZomb");
		frtp1.takeDamage(6);
		frtp1.beRepaired(4);
		frtp1.takeDamage(3);
		frtp1.beRepaired(8);
		frtp1.takeDamage(17);
		frtp1.highFivesGuys();
	}
	{
		ScavTrap	sctp1("ScavTrap");
	
		sctp1.attack("Zombie");
		sctp1.takeDamage(6);
		sctp1.beRepaired(4);
		sctp1.takeDamage(3);
		sctp1.guardGate();
		sctp1.beRepaired(8);
		sctp1.takeDamage(17);
	}
	{
		ClapTrap	cltp1("ClapTrap");
		cltp1.attack("DiffZombie");
		cltp1.takeDamage(6);
		cltp1.beRepaired(4);
		cltp1.takeDamage(3);
		cltp1.beRepaired(8);
		cltp1.takeDamage(17);
	}
	return 0;
}