/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:26:52 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/01 11:56:44 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	Intro(std::string msg)
{
	std::cout << msg << std::endl;
}

int main(void)
{
	Intro("Introducing Zombie Amy! Using normal constructor");
	Zombie	Amy("Amy");
	Amy.announce();

	Intro("Introducing Zombie Bob! Using announce");
	Zombie	*Bob = newZombie("Bob");
	Bob->announce();
	delete Bob;

	Intro("Introducing some guy, \"Guy\" using randomChump");
	randomChump("Guy");
	return (0);
}
