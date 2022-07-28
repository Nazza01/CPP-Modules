/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:25:57 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/26 15:32:22 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/**
 * Resources used for this module:
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * https://onlinetoolz.net/bitshift#base=2&value=10&bits=8&steps=8&dir=l&type=log&allsteps=1
 * https://stackoverflow.com/questions/141525/what-are-bitwise-shift-bit-shift-operators-and-how-do-they-work
**/
class Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
//	OCF	Functions
	Fixed(void);																//	Default Constructor
	Fixed(const Fixed& other);													//	Copy Constructor
	Fixed& operator=(const Fixed &other);										//	Copy Assignment Constructor
	~Fixed(void);																//	Default Destructor

//	EX00 Functions
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

//	EX01 Functions
	Fixed(const int par);														//	Takes const int and converts to fixed point value
	Fixed(const float nbr);														//	Takes const floating point and converts to fp value
	float	toFloat(void) const;												//	Converts fixed point to floating point value
	int		toInt(void) const;													//	Converts fixed point to integer value
};

std::ostream& operator<<(std::ostream &out, const Fixed &value);				//	Overloaded << operator (so that std::cout << <Fixed _obj_> << std::endl; can work)

#endif
