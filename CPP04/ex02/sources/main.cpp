/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:14:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/27 17:24:25 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define	TOTAL_ANIMALS 8

#include <iostream>

int main(void)
{
	// Animal test;			//	Uncomment for eval :)
	
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	{
		std::cout << "==================   BASIC TEST   ==================\n" << std::endl;

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;

		std::cout << std::endl;

		dog->makeSound();
		cat->makeSound();

		std::cout << std::endl;
	}
	{
		std::cout << "================== TEST DEEP COPY ==================\n" << std::endl;

		cat->getBrain()->_ideas[0] = "I like potatoes";
		cat->getBrain()->_ideas[1] = "I like ice cream";

		std::cout << "Create Cat ideas:" << std::endl;
		for (int i = 0; i < 2; i++)
			std::cout << "Idea: " << cat->getBrain()->_ideas[i] << std::endl;
		std::cout << std::endl;

		std::cout << "Before Copy: cat2" << std::endl;
		Cat *cat2 = new Cat();
		std::cout << std::endl;

		std::cout << "Before Copy: Cat2 ideas" << std::endl;
		for (int i = 0; i < 2; i++) 
			std::cout << "Idea: " << cat2->getBrain()->_ideas[i] << std::endl;
		std::cout << std::endl;

		std::cout << "Copy Cat2 = Cat" << std::endl;
		*cat2 = *cat;
		std::cout << std::endl;

		std::cout << "Current: Cat ideas" << std::endl;
		for (int i = 0; i < 2; i++)
			std::cout << "Idea: " << cat->getBrain()->_ideas[i] << std::endl;
		std::cout << std::endl;

		std::cout << "Current: Cat2 ideas" << std::endl;
		for (int i = 0; i < 2; i++)
			std::cout << "Idea: " << cat2->getBrain()->_ideas[i] << std::endl;
		std::cout << std::endl;

		std::cout << "After Copy: Cat ideas (now he hates ice cream)" << std::endl;
		cat->getBrain()->_ideas[1] = "I hate ice cream";
		for (int i = 0; i < 2; i++) 
			std::cout << "Idea: " << cat->getBrain()->_ideas[i] << std::endl;
		std::cout << std::endl;

		std::cout << "After Copy Cat2 ideas" << std::endl;
		for (int i = 0; i < 2; i++)
			std::cout << "Idea: " << cat2->getBrain()->_ideas[i] << std::endl;
		std::cout << std::endl;	
		std::cout << "==================   CLEAN ALL    ==================\n" << std::endl;

		delete dog;
		delete cat;
		delete cat2;

		std::cout << std::endl;
	}
	{
		std::cout << "================ SUBJECT ARRAY TEST ================\n" << std::endl;

		Animal *animals[TOTAL_ANIMALS];

		for (int i = 0; i < TOTAL_ANIMALS; i++)
		{
			if (i < TOTAL_ANIMALS / 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}

		std::cout << std::endl;

		for (int i = 0; i < TOTAL_ANIMALS; i++)
			animals[i]->makeSound();

		std::cout << std::endl;

		for (int i = 0; i < TOTAL_ANIMALS; i++)
			delete animals[i];
	}
	return 0;
}