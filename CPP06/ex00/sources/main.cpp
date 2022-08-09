/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:09:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/01 17:36:17 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 2 && *av[1] == 't')
	{
		Scalar sc;
		std::cout << std::endl;
		std::cout << "Commencing tests" << std::endl;
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "Test Case - a" << std::endl;
		sc.convert("a");
		std::cout << "Test Case - z" << std::endl;
		sc.convert("z");
		std::cout << "Test Case - A" << std::endl;
		sc.convert("A");
		std::cout << "Test Case - Z" << std::endl;
		sc.convert("Z");
		std::cout << std::endl;
		
		std::cout << std::endl;
		std::cout << "Test Case - 0" << std::endl;
		sc.convert("0");
		std::cout << "Test Case - 9" << std::endl;
		sc.convert("9");
		std::cout << std::endl;
	
		std::cout << std::endl;
		std::cout << "Test Case - 42" << std::endl;
		sc.convert("42");
		std::cout << "Test Case - 48" << std::endl;
		sc.convert("48");
	
		std::cout << "Test Case - 42.0f" << std::endl;
		sc.convert("42.0f");
		std::cout << std::endl;
		
		std::cout << std::endl;
		std::cout << "Test Case - Special: -inff" << std::endl;
		sc.convert("-inff");
		std::cout << "Test Case - Special: -inf" << std::endl;
		sc.convert("-inf");
		std::cout << "Test Case - Special: +inff" << std::endl;
		sc.convert("+inff");
		std::cout << "Test Case - Special: +inf" << std::endl;
		sc.convert("+inf");
		std::cout << "Test Case - Special: nanf" << std::endl;
		sc.convert("nanf");
		std::cout << "Test Case - Special: nan" << std::endl;
		sc.convert("nan");
		std::cout << std::endl;
	}
	else if (ac == 1)
	{
		std::cout << "Please input at least one parameter" << std::endl;
		std::cout << "Usage - ./scalar.out <literal>" << std::endl;
	}
	else
	{
		Scalar sc;
		// sc.verbose = true;					//	Uncomment to see order of functions and other useful info
		sc.convert(av[1]);
	}
	return 0;
}
