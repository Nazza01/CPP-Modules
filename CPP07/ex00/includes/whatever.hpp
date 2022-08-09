/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:35:04 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/01 22:43:36 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEVER_HPP
#define WEVER_HPP

/*
Good resources for templating

https://m.cplusplus.com/doc/oldtutorial/templates/
https://en.cppreference.com/w/cpp/language/templates

*/

template <typename Swp>
void swap (Swp &a, Swp &b) 
{
	Swp	temp = a;
	a = b;
	b = temp;
}

template <typename Max>
Max	max(Max a, Max b)
{
	return (a > b ? a : b); 	// If a is larger than b, a will be returned : otherwise b will
}

template <typename Min>
Min	min(Min a, Min b)
{
	return (a < b ? a : b);		// a is smaller than b ? a will be returned : otherwise b will
}

#endif
