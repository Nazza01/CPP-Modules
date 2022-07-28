/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:24 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/25 16:49:27 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define	BRAIN_HPP

#include <string>

class Brain
{
private:
	static const int	numIdeas = 100;

public:
	std::string	_ideas[Brain::numIdeas];

//	OCF	Functions
	Brain(void);
	Brain(const Brain& other);
	~Brain(void);
	Brain&	operator=(const Brain &other);

};

#endif
