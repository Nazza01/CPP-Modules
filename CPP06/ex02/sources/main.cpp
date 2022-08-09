/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:58:08 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/04 10:23:33 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

#include <iostream>
#include <stdlib.h>			//	For valgrind rand
#include <stdint.h>			//	For valgrind rand


Base	*generate(void)
{
	std::srand(time(NULL));

	int	randomNum = std::rand() % 3;
	if (randomNum == 0)
	{
		std::cout << "Generating class A" << std::endl;
		return new ClassA;
	}
	else if (randomNum == 1)
	{
		std::cout << "Generating class B" << std::endl;
		return new ClassB;
	}
	else if (randomNum == 2)
	{
		std::cout << "Generating class C" << std::endl;
		return new ClassC;
	}
	else
	{
		std::cout << "Something is wrong, please check the random function" << std::endl;
		return NULL;
	}
}

void	identify(Base *p)
{
	std::cout << "identify(Base *p) Results: ";
	if (dynamic_cast<ClassA*>(p) != NULL)
		std::cout << "Class A is the generated type!" << std::endl;
	else if (dynamic_cast<ClassB*>(p) != NULL)
		std::cout << "Class B is the generated type!" << std::endl;
	else if (dynamic_cast<ClassC*>(p) != NULL)
		std::cout << "Class C is the generated type!" << std::endl;
	else
		std::cout << "Class was not able to be identified?!" << std::endl;
}

void	identify(Base &p)
{
	bool	nota = false;
	bool	notb = false;
	bool	notc = false;

	std::cout << "identify(Base &p) Results: ";
	try {			ClassA	&a = dynamic_cast<ClassA&>(p);	(void)a;}
	catch (...) {	nota = true;}
	try {			ClassB	&b = dynamic_cast<ClassB&>(p);	(void)b;}
	catch (...) {	notb = true;}
	try {			ClassC	&c = dynamic_cast<ClassC&>(p);	(void) c;}
	catch (...) {	notc = true;}

	if (nota == false)
		std::cout << "Class A is the generated type!" << std::endl;
	else if (notb == false)
		std::cout << "Class B is the generated type!" << std::endl;
	else if (notc == false)
		std::cout << "Class C is the generated type!" << std::endl;
	else
		std::cout << "Something is wrong..." << std::endl;
}

int main(void)
{
	Base	*base = generate();

	identify(base);				//	Calls identify(Base *p)
	identify(*base);			//	Calls identify(Base &p)
	
	delete base;

	return 0;
}
