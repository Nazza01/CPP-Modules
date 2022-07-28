/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:14:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/04 13:56:10 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	{
		ClapTrap	p1("Player 1");

		p1.attack("Player 2");
		p1.takeDamage(9);
		p1.beRepaired(1);
		p1.takeDamage(2);
		p1.attack("Player 3");
	}
	{
		ClapTrap	p2("Player 2");
	
		p2.attack("Player 1");
		p2.takeDamage(20);
		p2.beRepaired(1);
	}
	return 0;
}