/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:24 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/07 15:29:23 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define	WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;

public:
//	OCF	Functions
	WrongAnimal(void);																//	Default Constructor
	WrongAnimal(const WrongAnimal& other);												//	Copy Constructor
	WrongAnimal&	operator=(const WrongAnimal &other);										//	Copy Assignment Constructor
	virtual	~WrongAnimal(void);																//	Default Destructor

//	EX00 Functions
	std::string	getType(void) const;
	void		makeSound(void) const;
};

#endif
