/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:17:37 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/01 17:06:38 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>

class Scalar
{
public:
	static bool	verbose;

//	OCF Functions
	Scalar(void);
	Scalar(const Scalar &other);
	~Scalar(void);
	Scalar	&operator=(const Scalar &other);
	
//	EX00 Functions
	void	convert(const std::string &literal);
};

#endif
