/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:09:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:22:05 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::string	al	=	"Alvin";
	std::string	ba	=	"Barry";
	std::string	cr	=	"Creel";
	std::string da	=	"Daniel";
	std::string	et	=	"Ethan";

	{
		std::cout << "-------- 1st Test --------" << std::endl; 
		try
		{
			Bureaucrat	a(al, 0);
			std::cout << a << std::endl;
		}
		catch (std::exception &except)
		{
			std::cout << "Exception Caught!\n\t" << except.what() << std::endl;
		}
	}
	{
		std::cout << "-------- 2nd Test --------" << std::endl;
		try
		{
			Bureaucrat	b(ba, 151);
			std::cout << b << std::endl;
		}
		catch (std::exception &except)
		{
			std::cout << "Exception Caught!\n\t" << except.what() << std::endl;
		}
	}
	{
		std::cout << "-------- 3rd Test --------" << std::endl;
		try
		{
			Bureaucrat	c(cr, 150);
			std::cout << c << std::endl;
			std::cout << "Attempting to decrease the grade by 1: 150->151" << std::endl;
			c.decGrade(1);
			std::cout << c << std::endl;
		}
		catch (std::exception &except)
		{
			std::cout << "Exception Caught!\n\t" << except.what() << std::endl;
		}
	}
	{
		std::cout << "-------- 4th Test --------" << std::endl;
		try
		{
			Bureaucrat	d(da, 1);
			std::cout << d << std::endl;
			std::cout << "Attempting to increase the grade by 1: 1->0" << std::endl;
			d.incGrade(1);
			std::cout << d << std::endl;
		}
		catch (std::exception &except)
		{
			std::cout << "Exception Caught!\n\t" << except.what() << std::endl;
		}
	}
	{
		std::cout << "-------- 5th Test --------" << std::endl;
		try
		{
			Bureaucrat	e(et, 150);
			std::cout << "Attempting to increase the grade by 149: 150->1" << std::endl;
			e.incGrade(149);
			std::cout << e << std::endl;
			std::cout << "Attempting to decrease the grade by 150: 1->151" << std::endl;
			e.decGrade(150);
			std::cout << e << std::endl;
		}
		catch (std::exception &except)
		{
			std::cout << "Exception Caught!\n\t" << except.what() << std::endl;
		}
	}
}
