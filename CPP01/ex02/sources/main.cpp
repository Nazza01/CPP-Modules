/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:26:52 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/13 18:04:57 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	hibrain = "HI THIS IS BRAIN";	//	Declare a string variable and assign it
	std::string	*stringPTR = &hibrain;			//	Declare the pointer and assign it to hibrain
	std::string	&stringREF = hibrain;			//	Declare the reference and assign it to hibrain

	std::cout << "MEMORY ADDRESS> hibrain: " << &hibrain << std::endl;
	std::cout << "MEMORY ADDRESS> stringPTR: " << stringPTR << std::endl;
	std::cout << "MEMORY ADDRESS> stringREF: " << &stringREF << std::endl;
	
	std::cout << "VALUE> hibrain: " << hibrain << std::endl;
	std::cout << "VALUE> stringPTR: " << *stringPTR << std::endl;
	std::cout << "VALUE> stringREF: " << stringREF << std::endl;
	return (0);
}
