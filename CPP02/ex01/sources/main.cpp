/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:22:27 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/25 16:41:55 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed		a;																//	Default constructor called
	Fixed const	b( 10 );														//	Int constructor called
	Fixed const	c( 42.42f );													//	Float constructor called
	Fixed const d( b );															//	Copy constructor called

																				//	Copy assignment operator called
	a = Fixed( 1234.4321f );													//	Float constructor called
																				//	Copy assignment operator called
																				//	Destructor called

	std::cout << "a is " << a << std::endl;										//	a is 1234.43
	std::cout << "b is " << b << std::endl;										//	b is 10
	std::cout << "c is " << c << std::endl;										//	c is 42.4219
	std::cout << "d is " << d << std::endl;										//	d is 10

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;			//	a is 1234 as integer
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;			//	b is 10 as integer
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;			//	c is 42 as integer
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;			//	d is 10 as integer
	return (0);
}
