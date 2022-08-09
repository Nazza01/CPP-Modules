/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:10:16 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:18:17 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <string>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	static const int	lowGrade = 150;
	static const int	highGrade = 1;
	std::string const	_name;
	int					_grade;
public:
//	OCF Functions
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat(void);	
	Bureaucrat 			&operator=(const Bureaucrat &other);

//	EX00 Functions
	Bureaucrat(const std::string &n, int g);
	const std::string	getName(void) const;
	void				CheckGrade(int grade) const;
	int					getGrade(void) const;
	void				incGrade(int num);
	void				decGrade(int num);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

//	EX01 Functions
	void	signForm(Form &f) const;
	void	execForm(Form &f) const;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat& b);

#endif
