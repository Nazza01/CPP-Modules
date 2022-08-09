/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:21:29 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:44:12 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESPARFOR_HPP
#define PRESPARFOR_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
//	OCF Functions
	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	~PresidentialPardonForm(void);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

//	EX02 Functions
	PresidentialPardonForm(std::string target);
	void			doAction(void) const;
};

#endif
