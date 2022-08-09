/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:12:21 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/31 00:25:30 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	typedef struct	s_form {
		std::string namecmp;
		Form		*fclass;
	}	t_form;
public:
//	OCF Functions
	Intern(void);
	Intern(const Intern &other);
	~Intern(void);	
	Intern 			&operator=(const Intern &other);

//	EX00 Functions
	Form			*makeForm(std::string request, std::string target);
};

#endif
