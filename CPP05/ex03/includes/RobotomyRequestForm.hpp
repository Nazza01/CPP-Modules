/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:23:04 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:44:22 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBREQFOR_HPP
#define ROBREQFOR_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
//	OCF Functions
	RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	~RobotomyRequestForm(void);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

//	EX02 Functions
	RobotomyRequestForm(std::string target);
	void				doAction(void) const;
};

#endif
