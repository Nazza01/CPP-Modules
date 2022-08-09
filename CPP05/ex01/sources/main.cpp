/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:09:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:26:28 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int	main(void)
{
	{
		std::cout << "Test 1 - Invalid sign grade - too high" << std::endl;
		try
		{
			Form	f("EB110", 0, 1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Test 2 - Invalid execute grade - too high" << std::endl;
		try
		{
			Form	f("EB111", 1, 0);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Test 3 - Invalid execute grade - too low" << std::endl;
		try
		{
			Form	f("EB112", 1, 151);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Test 4 - Invalid sign grade - too low" << std::endl;
		try
		{
			Form	f("EB113", 151, 1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Test 5 - Grade 1 signing and executing minimum 150 grade form (both exec and sign)" << std::endl;
		try
		{
			Bureaucrat	john = Bureaucrat("John", 1);
			Form		f("EB114", 150, 150);

			std::cout << f << std::endl;
			john.signForm(f);
			john.execForm(f);
			std::cout << f << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	
	}
	{
		std::cout << "Test 6 - Grade 1 signing and executing a form with exec 1, sign 150" << std::endl;
		try
		{
			Bureaucrat	john = Bureaucrat("John", 1);
			Form		f("EB114", 150, 1);

			std::cout << f << std::endl;
			john.signForm(f);
			john.execForm(f);
			std::cout << f << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	
	}
	{
		std::cout << "Test 7 - Grade 10 signing and executing a form with exec 1, sign 1" << std::endl;
		try
		{
			Bureaucrat	joe = Bureaucrat("Joe", 10);
			Form		f("EB115", 1, 1);
			std::cout << f << std::endl;
			joe.signForm(f);
			joe.execForm(f);
			std::cout << f << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
