/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:10:42 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/03 22:59:09 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF	- Default Constructor
**/
Bureaucrat::Bureaucrat(void): _name(""), _grade(Bureaucrat::lowGrade)
{
	std::cout << "Setting Default Values:\t" << this->_name << "\t" 
		<< this->_grade << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = other;
}

/**
 * @brief	OCF - Destructor
**/
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat is no more" << std::endl;
}

/**
 * @brief	OCF - Copy Assignment Operator
**/
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy assignment operator for Bureucrat called" << std::endl;
	this->_grade = other._grade;
	return *this;
}

/* ************************************************************************** */
/* 								EX00 Functions 								  */
/* ************************************************************************** */

/**
 * @brief	String and Integer Constructor
 * @param	n	The name to assigned to the current instance
 * @param	g	The grade to be assigned to the current instance
**/
Bureaucrat::Bureaucrat(const std::string &n, int g): _name(n), _grade(g)
{
	std::cout << "Welcome " << this->_name << " grade " << this->_grade 
		<< std::endl;
	CheckGrade(g);
}

const std::string		Bureaucrat::getName(void) const
{
	return this->_name;
}

int				Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

/**
 * @brief	Throws a Bureaucrat Exception based on if the grade is too high or
 * too low
**/
void Bureaucrat::CheckGrade(int grade) const
{
	if (grade < Bureaucrat::highGrade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > Bureaucrat::lowGrade)
		throw Bureaucrat::GradeTooLowException();
		
}

void			Bureaucrat::incGrade(int num)
{
	this->_grade -= num;
	CheckGrade(this->_grade);
}

void			Bureaucrat::decGrade(int num)
{
	this->_grade += num;
	CheckGrade(this->_grade);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade you set is too high";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade you set is too low";
}

/**
 * @brief	Overloads the << operator to output all the properties of the
 * bureaucrat (grade and name)
 * @param	out	The output stream
 * @param	b	The object to output
 * @return	The output stream operator
**/
std::ostream&	operator<<(std::ostream &out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}
