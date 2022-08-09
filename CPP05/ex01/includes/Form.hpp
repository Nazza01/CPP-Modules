/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 23:40:22 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:39:04 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <string>

class Bureaucrat;

class Form
{
private:
	static const int	lowGrade = 150;
	static const int	highGrade = 1;
	const std::string	_formName;
	bool				_signed;
	bool				_execed;
	const int			_grSign;
	const int			_grExec;
public:
//	OCF Functions
	Form(void);
	Form(const Form &other);
	~Form(void);
	Form 				&operator=(const Form &other);

//	EX01 Functions
	Form(std::string name, int minGradeSig, int minGradeExec);
	void				beSigned(const Bureaucrat &b);
	void				beExecuted(const Bureaucrat &b);
	void				checkGrade(void);

	//	Getters
	const std::string	GetFormName(void) const;
	bool				GetSignedStatus(void) const;
	bool				GetExecutedStatus(void) const;
	int					GetSignedGrade(void) const;
	int					GetGradeExecute(void) const;
	
	//	Setters
	void				SetSignedStatus(bool setSigned);
	void				SetExecuteStatus(bool setExecute);

	//	Exceptions
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

};

std::ostream	&operator<<(std::ostream &out, const Form &f);

#endif
