/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:07 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/25 17:08:02 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
private:

	Brain	*_brain;

public:

// 	OCF Functions
	Cat(void);
	Cat(const Cat& other);
	~Cat(void);
	Cat				&operator=(const Cat &other);

//	EX00 Functions
	virtual void	makeSound(void) const;

//	EX01 Functions
	virtual Brain	*getBrain(void) const;

};

#endif
