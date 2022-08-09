/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:23:04 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:44:27 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRCREFOR_HPP
#define SHRCREFOR_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:

public:
//	OCF Functions
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

//	EX02 Functions
	ShrubberyCreationForm(std::string target);
	void					doAction(void) const;
};

#endif
