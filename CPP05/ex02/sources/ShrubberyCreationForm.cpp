/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:24:02 by Nathanael         #+#    #+#             */
/*   Updated: 2022/07/30 23:44:53 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <fstream>

/* ************************************************************************** */
/* 								OCF Functions 								  */
/* ************************************************************************** */

/**
 * @brief	OCF - Default Constructor
**/
ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form Default Constructor called" << std::endl;
}

/**
 * @brief	OCF - Copy Constructor
**/
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	std::cout << "Shrubbery Creation FormCopy Constructor called" << std::endl;
	*this = other;
}

/**
 * @brief	OCF - Destructor
**/
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form Destructor called" << std::endl;
}

/**
 * @brief	OCF - Assignment Operator
**/
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "Shrubbery Creation Form Form Assignment Operator called" << std::endl;
	this->SetSignedStatus(other.GetSignedStatus());
	this->SetExecuteStatus(other.GetExecutedStatus());
	this->SetTarget(other.GetTarget());
	return *this;
}

/* ************************************************************************** */
/* 								EX02 Functions 								  */
/* ************************************************************************** */

/**
 * @brief	Uses the base Form class to make the presidential pardon form with
 * the pdf requirements (Sign 145, Exec 137)
 * @param	target	The target to assign to the form
**/
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form::Form("ShrubberyCreationForm", 145, 137)
{
	this->SetTarget(target);
}

void		ShrubberyCreationForm::doAction(void) const
{
	std::ofstream outfile;

	outfile.open((this->GetTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);
	std::cout << "File: " << this->GetTarget() << "_shrubbery created" << std::endl;
	std::cout << "Writing ascii trees into file..." << std::endl;
	outfile << "	       ,.," << std::endl;
	outfile << "	      MMMM_    ,..," << std::endl;
	outfile << "	        \"_ \"__\"MMMMM          ,...,," << std::endl;
	outfile << "	 ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
	outfile << "	MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
	outfile << "	 \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
	outfile << "	        ,., _\"__ \\__./ .\"" << std::endl;
	outfile << "	       MMMMM_\"  \"_    ./" << std::endl;
	outfile << "	        ''''      (    )" << std::endl;
	outfile << "	 ._______________.-'____\"---._." << std::endl;
	outfile << "	  \\                          /" << std::endl;
	outfile << "	   \\________________________/" << std::endl;
	outfile << "	   (_)                    (_)" << std::endl;
}
