/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:36:00 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/02 22:31:00 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>
#include <string>

template<typename T>
void	printout(T &var)
{
	std::cout << "\t" << var << std::endl;
}

int main(void)
{
	{
		int 		arr[4] = {1, 2, 3, 4};
		
		std::cout << "Integer Array: " << std::endl;
		::iter(arr, 4, &printout);
		std::cout << std::endl;
	}
	{
		std::string	str[4] = {"Hello", "There", "String", "Array"};

		std::cout << "String Array: " << std::endl;
		::iter(str, 4, &printout);
		std::cout << std::endl;
	}
	{
		char str[6] = "Hello";
		std::cout << "Character Array: " << std::endl;
		::iter(str, 6, &printout);
		std::cout << std::endl;
	}
	{
		bool barr[3] = {true, false, true};
		std::cout << "Bool Array: " << std::endl;
		::iter(barr, 3, &printout);
		std::cout << std::endl;
	}
	{
		char chr[3] = {'a', 'b', 'c'};
		std::cout << "Individual Char Array: " << std::endl;
		::iter(chr, 3, &printout);
		std::cout << std::endl;
	}
	return 0;
}
