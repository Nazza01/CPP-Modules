/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:07 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/25 17:08:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{

private:
	Brain	*_brain;

public:

//	OCF Functions
	Dog(void);
	Dog(const Dog& other);
	~Dog(void);
	virtual Dog		&operator=(const Dog &other);

//	EX00 Functions
	virtual void	makeSound(void) const;
	
//	EX01 Functions
	virtual Brain	*getBrain(void) const;

};

#endif
