/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:09:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/03 23:07:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

void	shrubTests(void)
{
	ShrubberyCreationForm	bonsai("bonsai");
	Bureaucrat	Sign("Sign", 145);
	Bureaucrat	Exec("Exec", 137);

	std::cout << std::endl;
	std::cout << "\t==== START SHRUBBERY TESTS ====" << std::endl;
	std::cout << std::endl;

	std::cout << "Current form properties: " << std::endl;
	std::cout << bonsai << std::endl;

	//	Uncomment this pair to test a case where the grades are within the valid range
	// Sign.incGrade(1);			// 145 becomes 144	- valid
	// Exec.incGrade(1);			// 137 becomes 136 - valid
	
	//	Uncomment this pair to test a case where the grades fall outside the valid range (too low)
	// Sign.decGrade(1);			// 145 becomes 146 - not valid
	// Exec.decGrade(1);			// 137 becomes 138 - not valid
	
	{
		std::cout << "Testing Case: Attempting to Execute before Sign" << std::endl;
		std::cout << "\tNote: This should fail due to needing to be signed before being executed" << std::endl;
		try {
			Sign.execForm(bonsai);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << bonsai << std::endl;
	}
	{
		std::cout << "Test Case: Attempting to Sign" << std::endl;
		try {
			Sign.signForm(bonsai);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << bonsai << std::endl;
	}
	{
		std::cout << "Test Case: Attempting to Execute" << std::endl;
		try {
			Exec.execForm(bonsai);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << bonsai << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t==== END SHRUBBERY TESTS ====" << std::endl;
	std::cout << std::endl;
}

void	robotTests(void)
{
	RobotomyRequestForm	robot("robot");
	Bureaucrat	Sign("Sign", 72);
	Bureaucrat	Exec("Exec", 45);

	std::cout << std::endl;
	std::cout << "\t==== START ROBOT TESTS ====" << std::endl;
	std::cout << std::endl;

	std::cout << "Current form properties: " << std::endl;
	std::cout << robot << std::endl;

	//	Uncomment this pair to test a case where the grades are within the valid range
	// Sign.incGrade(1);			// 72 becomes 71	- valid
	// Exec.incGrade(1);			// 45 becomes 44	- valid
	
	//	Uncomment this pair to test a case where the grades fall outside the valid range (too low)
	// Sign.decGrade(1);			// 72 becomes 73	- not valid
	// Exec.decGrade(1);			// 45 becomes 46	- not valid
	
	{
		std::cout << "Testing Case: Attempting to Execute before Sign" << std::endl;
		std::cout << "\tNote: This should fail due to needing to be signed before being executed" << std::endl;
		try {
			Sign.execForm(robot);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << robot << std::endl;
	}
	{
		std::cout << "Test Case: Attempting to Sign" << std::endl;
		try {
			Sign.signForm(robot);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << robot << std::endl;
	}
	{
		std::cout << "Test Case: Attempting to Execute" << std::endl;
		for (int i = 0; i < 6; i++)												//	For loop needed to test out the 50% robotomized stat
		{
			try {
				Exec.execForm(robot);
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
			std::cout << robot << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\t==== END ROBOT TESTS ====" << std::endl;
	std::cout << std::endl;
}

void	presTests(void)
{
	PresidentialPardonForm	pres("pres");
	Bureaucrat	Sign("Sign", 25);
	Bureaucrat	Exec("Exec", 5);

	std::cout << std::endl;
	std::cout << "\t==== START PRES TESTS ====" << std::endl;
	std::cout << std::endl;

	std::cout << "Current form properties: " << std::endl;
	std::cout << pres << std::endl;

	//	Uncomment this pair to test a case where the grades are within the valid range
	// Sign.incGrade(1);			// 25 becomes 24	- valid
	// Exec.incGrade(1);			// 5 becomes 4 - valid
	
	//	Uncomment this pair to test a case where the grades fall outside the valid range (too low)
	// Sign.decGrade(1);			// 25 becomes 26 - not valid
	// Exec.decGrade(1);			// 5 becomes 6 - not valid
	
	{
		std::cout << "Testing Case: Attempting to Execute before Sign" << std::endl;
		std::cout << "\tNote: This should fail due to needing to be signed before being executed" << std::endl;
		try {
			Sign.execForm(pres);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << pres << std::endl;
	}
	{
		std::cout << "Test Case: Attempting to Sign" << std::endl;
		try {
			Sign.signForm(pres);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << pres << std::endl;
	}
	{
		std::cout << "Test Case: Attempting to Execute" << std::endl;
		try {
			Exec.execForm(pres);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << pres << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t==== END PRES TESTS ====" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	shrubTests();
	robotTests();
	presTests();

	return 0;
}
