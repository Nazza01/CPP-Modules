/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:07 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:29:13 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
#define	WRONGCAT_HPP

#include "WrongAnimal.hpp"

//	virtual allows for mulitple definitions to be called depending on class implementations

class WrongCat: public WrongAnimal
{
public:
// 	OCF Functions
	WrongCat(void);																//	Default Constructor
	WrongCat(const WrongCat& other); 											//	Copy Constructor
	WrongCat&	operator=(const WrongCat &other);								//	Copy Assignment Constructor
	~WrongCat(void);													//	Default Destructor

//	EX00 Functions
	void	makeSound(void) const;
};

#endif
