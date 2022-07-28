/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:23:52 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/24 22:22:27 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int					value;
	static const int	bits = 8;

public:
	Fixed( void );							//	Default Constructor
	Fixed( const Fixed& other);				//	Copy Constructor
	Fixed& operator=( const Fixed& other );	//	Copy Assignment Operator
	~Fixed( void );							//	Default Destructor

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
