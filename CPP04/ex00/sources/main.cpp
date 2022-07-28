/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:14:46 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/21 15:24:11 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << "dog->getType(): " << dog->getType() << std::endl;
		std::cout << "cat->getType(): " << cat->getType() << std::endl;
		dog->makeSound();
		cat->makeSound();
		meta->makeSound();
		delete meta;
		delete cat;
		delete dog;
	}
	{	
		const	WrongAnimal*	metaWrong	= new WrongAnimal();
		const	WrongAnimal*	catWrong	= new WrongCat();

		std::cout << catWrong->getType() << std::endl;
		metaWrong->makeSound();
		catWrong->makeSound();

		delete catWrong;
		delete metaWrong;
	}
	return 0;
}