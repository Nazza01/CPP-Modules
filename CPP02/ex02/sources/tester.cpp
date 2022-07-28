/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:41:09 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/30 17:21:15 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void	SecondTest(Fixed f1, Fixed f2)
{
	std::cout << "\tf1.min(1, 10): " << (f1.min(1, 10)) << "\t\t\t"
		<< "f1++: " << (f1++) << std::endl;
	std::cout << "\tf1.min(10, 1): " << (f1.min(10, 1)) << "\t\t\t"
		<< "++f1: " << (++f1) << std::endl;
	std::cout << "\tf1.max(1, 10): " << (f1.max(1, 10)) << "\t\t\t"
		<< "f1--: " << (f1--) << std::endl;
	std::cout << "\tf1.max(10, 1): " << (f1.max(10, 1)) << "\t\t\t"
		<< "--f1: " << (--f1) << std::endl;
	std::cout << "\tf1.min(-1, -10): " << (f1.min(-1, -10)) << "\t\t\t"
		<< "f2++: " << (f2++) << std::endl;
	std::cout << "\tf1.min(-10, -1): " << (f1.min(-10, -1)) << "\t\t\t"
		<< "++f2: " << (++f2) << std::endl;
	std::cout << "\tf1.max(-1, -10): " << (f1.max(-1, -10)) << "\t\t\t"
		<< "f2--: " << (f2--) << std::endl;
	std::cout << "\tf1.max(-10, -1): " << (f1.max(-10, -1)) << "\t\t\t"
		<< "--f2: " << (--f2) << std::endl;
	std::cout << "\tf1.min(1, 1): " << (f1.min(1, 1)) << std::endl;
	std::cout << "\tf1.max(1, 1): " << (f1.max(1, 1)) << std::endl;
}

static void	FirstTest(Fixed f1, Fixed f2)
{
	std::cout << "\tf1 < f2: " << (f1 < f2) << "\t\t\t\t"
		<< "f1 + f2: " << (f1 + f2) << std::endl;
	std::cout << "\tf1 <= f2: " << (f1 <= f2) << "\t\t\t\t"
		<< "f1 - f2: " << (f1 - f2) << std::endl;
	std::cout << "\tf1 > f2: " << (f1 > f2) << "\t\t\t\t"
		<< "f1 * f2: " << (f1 * f2) << std::endl;
	std::cout << "\tf1 >= f2: " << (f1 >= f2) << "\t\t\t\t"
		<< "f1 / f2: " << (f1 / f2) << std::endl;
	std::cout << "\tf1 == f2: " << (f1 == f2) << std::endl;
	std::cout << "\tf1 != f2: " << (f1 != f2) << std::endl;
}

void	tester(void)
{
	Fixed		f1(10);
	Fixed		f2(5.05f);

	std::cout << "***********************\t\tTest Start\t\t***********************" << std::endl;
	std::cout << "f1 = " << f1 << "\tf2 = " << f2 << std::endl;
	std::cout << "------------ Comparison overloads ------------\t";
	std::cout << "------------ Arithmetic overloads ------------" << std::endl;	
	FirstTest(f1, f2);
	std::cout << "------ Increment & Decrement overloads -------\t";
	std::cout << "------- Minimum & Maximum overloads ---------" << std::endl;
	SecondTest(f1, f2);
	std::cout << "***********************\t\tTest End\t\t***********************" << std::endl;
}
