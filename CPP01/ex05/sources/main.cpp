/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:26:52 by Nathanael         #+#    #+#             */
/*   Updated: 2022/06/24 20:57:31 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl	ht;

	ht.complain("debug");
	ht.complain("info");
	ht.complain("warning");
	ht.complain("error");
	return (0);
}
