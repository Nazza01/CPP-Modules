/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 23:41:27 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:59:12 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
Form::Form(void)
: _formName("Generic"), _signed(false), _execed(false), _grSign(150), _grExec(150)
{
	std::cout << "Setting default values for the form: "
		<< this->_formName << " " << this->_signed << " " << this->_grSign << " "
		<< this->_grExec << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Form::Form(const Form &other)
: _formName(other._formName), _signed(other._signed), _execed(false), _grSign(other._grSign), _grExec(other._grExec)
{
	std::cout << "Copy constructor for Form called" << std::endl;
	*this = other;
}

/**
 * @brief	OCF - Destructor
**/
Form::~Form(void)
{
	std::cout << "Form has been filed." << std::endl;
}

/**
 * @brief	OCF - Copy Assignment Operator
**/
Form	&Form::operator=(const Form &other)
{
	std::cout << "Copy assignment operator for Form called" << std::endl;
	this->_signed = other._signed;
	this->_execed = other._execed;
	return *this;
}

/* ************************************************************************** */
/* 								EX01 Functions 								  */
/* ************************************************************************** */

Form::Form(std::string name, int minGradeSig, int minGradeExec)
: _formName(name), _signed(false), _execed(false), _grSign(minGradeSig), _grExec(minGradeExec)
{
	this->checkGrade();
	std::cout << "Form " << _formName << " created" << std::endl;
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_grSign)
	{
		this->SetSignedStatus(true);
		std::cout << b.getName() << " signed " << this->_formName << std::endl;
	}
	else
	{
		std::cout << b.getName() << " can't sign " << this->_formName << std::endl;
		throw Form::GradeTooLowException();
	}
}

void	Form::beExecuted(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_grExec)
	{
		this->doAction();
		this->SetExecuteStatus(true);
		std::cout << b.getName() << " executed " << this->_formName << std::endl;
	}
	else
	{
		std::cout << b.getName() << " can't execute " << this->_formName << std::endl;
		throw Form::GradeTooLowException();
	}
}

void	Form::checkGrade(void)
{
	if (this->_grExec < Form::highGrade || this->_grSign < Form::highGrade)
		throw Form::GradeTooHighException();
	else if (this->_grExec > Form::lowGrade || this->_grSign > Form::lowGrade)
		throw Form::GradeTooLowException();
}

/* 								Getters		 								  */

const std::string	Form::GetFormName(void) const
{
	return this->_formName;
}

bool	Form::GetSignedStatus(void) const
{
	return this->_signed;
}

bool	Form::GetExecutedStatus(void) const
{
	return this->_execed;
}

int	Form::GetSignedGrade(void) const
{
	return this->_grSign;
}

int	Form::GetGradeExecute(void) const
{
	return this->_grExec;
}

/* 								Setters		 								  */
void	Form::SetSignedStatus(bool setSigned)
{
	this->_signed = setSigned;
}

void	Form::SetExecuteStatus(bool setExecute)
{
	this->_execed = setExecute;
}

/* 								Exceptions		 								  */
const char	*Form::GradeTooHighException::what() const throw()
{
	return "The grade you set is too high";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "The grade you set is too low";
}

/**
 * @brief	Overloads the << operator to output all the properties of the form
**/
std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	out << f.GetFormName() << ": "
		<< "\t Signed: " << (f.GetSignedStatus() ? "yes" : "no")
		<< "\t Executed: " << (f.GetExecutedStatus() ? "yes" : "no")
		<< "\t MinSignGrade: " << f.GetSignedGrade()
		<< "\t MinExecGrade: " << f.GetGradeExecute() << std::endl;
	return out;
}

/* ************************************************************************** */
/* 								EX02 Functions 								  */
/* ************************************************************************** */

const char			*Form::NotSigned::what(void) const throw()
{
	return "Form is not signed and cannot be executed";
}

void				Form::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
	{
		std::cout << executor.getName() << " can't execute " << this->_formName << std::endl;
		throw Form::NotSigned();
	}
	if (executor.getGrade() >= this->_grExec)
	{
		std::cout << executor.getName() << " can't execute " << this->_formName << std::endl;
		throw Form::GradeTooLowException();
	}
	std::cout << executor.getName() << " has executed " << this->_formName << std::endl;
	this->doAction();
}

const std::string	&Form::GetTarget(void) const
{
	return this->_target;
}

void				Form::SetTarget(std::string setTo)
{
	_target = setTo;	
}

