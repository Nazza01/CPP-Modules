/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:07 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:17:45 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
//	OCF Functions
	Dog(void);																	//	Default Constructor
	Dog(const Dog& other);														//	Copy Constructor
	Dog&	operator=(const Dog &other);										//	Copy Assignment Constructor
	virtual ~Dog(void);																	//	Default Destructor

//	EX00 Functions
	virtual void	makeSound(void) const;
};

#endif
