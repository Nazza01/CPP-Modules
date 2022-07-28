/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:24 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 14:55:48 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
//	OCF	Functions
	Animal(void);																//	Default Constructor
	Animal(const Animal& other);												//	Copy Constructor
	Animal&	operator=(const Animal &other);										//	Copy Assignment Constructor
	virtual ~Animal(void);														//	Default Destructor

//	EX00 Functions
	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};

#endif
