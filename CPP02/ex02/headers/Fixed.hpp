/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:25:57 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/27 14:09:30 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/**
 * Resources used for this module:
 * EX00-1
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * https://onlinetoolz.net/bitshift#base=2&value=10&bits=8&steps=8&dir=l&type=log&allsteps=1
 * https://stackoverflow.com/questions/141525/what-are-bitwise-shift-bit-shift-operators-and-how-do-they-work
 * EX02
 * https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
 * https://www.tutorialspoint.com/cplusplus/unary_operators_overloading.htm
 * https://www.tutorialspoint.com/cplusplus/binary_operators_overloading.htm
 * https://www.tutorialspoint.com/cplusplus/relational_operators_overloading.htm
 * https://stackoverflow.com/questions/27273465/how-do-i-get-decimals-in-c-if-im-using-integer-variables
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
	Fixed& 				operator=(const Fixed &other);							//	Copy Assignment Constructor
	~Fixed(void);																//	Default Destructor

//	EX00 Functions
	int					getRawBits(void) const;
	void				setRawBits(int const raw);

//	EX01 Functions
	Fixed(const int par);														//	Takes const int and converts to fixed point value
	Fixed(const float nbr);														//	Takes const floating point and converts to fp value
	float				toFloat(void) const;									//	Converts fixed point to floating point value
	int					toInt(void) const;										//	Converts fixed point to integer value

//	EX02 Functions
// 	Operator Overloads
//		Comparison Operators			>	<	>=	<=	==	!=
	bool	operator>(const Fixed &var);										//	Greater than
	bool	operator<(const Fixed &var);										//	Less than
	bool	operator>=(const Fixed &var);										//	Greater than or equal to
	bool	operator<=(const Fixed &var);										//	Less than or equal to
	bool	operator==(const Fixed &var);										//	Equal to
	bool	operator!=(const Fixed &var);										//	Not equal to

// 		Arithmetic Operators			+		-		*		/
	Fixed	operator+(const Fixed &var);										//	Addition
	Fixed	operator-(const Fixed &var);										//	Subtraction
	Fixed	operator*(const Fixed &var);										//	Multiplication
	Fixed	operator/(const Fixed &var);										//	Division

// 		Increment/Decrement Operators	i++		++i		i--		--i
	Fixed	&operator++(void);													//	Prefix increment operator (i++)
	Fixed	&operator--(void);													//	Prefix decrement operator (i--)
	Fixed	operator++(int);													//	Postfix increment operator (++i)
	Fixed	operator--(int);													//	Postfix decrement operator (--i)

// 	Overloaded member functions
	static const	Fixed &min(const Fixed &a, const Fixed &b);					//	Takes two const params and returns reference to min value
	static 			Fixed &min(Fixed &a, Fixed &b);								//	Takes two params and returns reference to min value
	static const 	Fixed &max(const Fixed &a, const Fixed &b);					//	Takes two const params and returns reference to max value
	static 			Fixed &max(Fixed &a, Fixed &b);								//	Takes two params and returns reference to max value
};

//	EX01 Operator Overloads
std::ostream& 			operator<<(std::ostream &out, const Fixed &value);		//	Overloaded << operator (so that std::cout << <Fixed _obj_> << std::endl; can work)

// 	Tester function
void	tester(void);

#endif
