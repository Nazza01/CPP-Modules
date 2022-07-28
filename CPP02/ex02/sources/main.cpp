/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:22:27 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/02 17:49:23 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed ( 2 ) );

	std::cout << "a:\t" << a << std::endl;
	std::cout << "++a:\t" << ++a << std::endl;
	std::cout << "a:\t" << a << std::endl;
	std::cout << "a++:\t" << a++ << std::endl;
	std::cout << "a:\t" << a << std::endl;
	
	std::cout << "b:\t" << b << std::endl;
	
	std::cout << "max( " << a << ", " << b << " ): \t";
	std::cout << Fixed::max( a, b ) << std::endl;
	tester();
	return 0;
}
