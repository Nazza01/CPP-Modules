/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:26:52 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/24 18:05:41 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sedloser.hpp"

int main(int ac, char *argv[])
{
	if (ac == 4)
	{
		parser(argv[1], argv[1], argv[2], argv[3]);
	}
	if (ac != 4)
	{
		std::cout << "Program usage: \n ./build/PoorSed ";
		std::cout << "[file] [String To Find] [String To Replace]\n";
	}
	return (0);
}
