/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:52:30 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/02 11:52:40 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}	
	for (int words = 1; words < ac; words++)
	{
		for (size_t letters = 0; letters < strlen(av[words]); letters++)
		{
			std::cout << (char)toupper(av[words][letters]);
		}
		std::cout << " ";
	}
	std::cout << "\n";
	return (0);
}
