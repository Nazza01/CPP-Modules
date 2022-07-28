/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:07 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 14:58:21 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
// 	OCF Functions
	Cat(void);																	//	Default Constructor
	Cat(const Cat& other);														//	Copy Constructor
	Cat&	operator=(const Cat &other);										//	Copy Assignment Constructor
	virtual	~Cat(void);																	//	Default Destructor

//	EX00 Functions
	virtual void	makeSound(void) const;
};

#endif
