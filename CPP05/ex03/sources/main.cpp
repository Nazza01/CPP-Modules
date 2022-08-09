/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:09:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/31 00:51:43 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#include <iostream>

int	main(void)
{
	Intern	*intern = new Intern();

	Form	*bonsai = intern->makeForm("shrubbery creation", "garden");
	Form	*bender = intern->makeForm("robotomy request", "bender");
	Form	*rick = intern->makeForm("presidential pardon", "rick");

	Form	*test = intern->makeForm("doesnt exist", "whoops");

	std::cout << *bonsai << std::endl;
	std::cout << *bender << std::endl;
	std::cout << *rick << std::endl;
	std::cout << "Test is not a valid form, as such this memory value isnt valid " << test << std::endl;
	
	delete intern;
	delete bonsai;
	delete bender;
	delete rick;
	delete test;

	return 0;
}
