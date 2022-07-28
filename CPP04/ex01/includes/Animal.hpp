/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:24 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/25 17:08:52 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include "Brain.hpp"
#include <string>

class Animal
{
protected:
	std::string	_type;

public:

//	OCF	Functions
	Animal(void);
	Animal(const Animal	&other);
	virtual ~Animal(void);
	Animal		&operator=(const Animal &other);

//	EX00 Functions
	const std::string	&getType(void) const;
	virtual void		makeSound(void) const = 0;
};

#endif
