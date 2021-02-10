/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 12:42:04 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 12:03:47 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("[AForm]"), _signed(false), _signGrade(120), _execGrade(110)
{
	return;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name('[' + name + ']'), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	return;
}

AForm::~AForm(void)
{
	std::cout << "AForm Destructed" << std::endl;
	return;
}

AForm::AForm(AForm const &src) : _name(src.getName()), _signed(src.getSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecuteGrade())
{
	*this = src;
	return;
}

AForm&		AForm::operator=(AForm const &obj)
{
	this->_signed = obj._signed;
	return *this;
}

std::string const&		AForm::getName(void) const
{
	return this->_name;
}

int						AForm::getSignGrade(void) const
{
	return this->_signGrade;
}

int						AForm::getExecuteGrade(void) const
{
	return this->_execGrade;
}

bool					AForm::getSigned(void) const
{
	return this->_signed;
}

void					AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if(bureaucrat.getGrade() > this->getSignGrade())
	{
		bureaucrat.signForm(*this);
		throw AForm::GradeTooLowException();
	}
	else
	{
		this->_signed = true;
		bureaucrat.signForm(*this);
	}
	return;
}

const char*				AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception is thrown because, well you guessed it, the grade is too HIGH";
}

const char*				AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low High Exception is thrown because, well you guessed it, the grade is too LOW";
}

const char*				AForm::FormNotSigned::what() const throw()
{
	return "This Form is not yet signed, please sign it first. Than you'll be able to execute";
}

const char*				AForm::GradeTooLowTooExecute::what() const throw()
{
	return "Grade Too Low To Execute Exception is thrown because, well you guessed it, the grade is too LOW to execute";
}

std::ostream&			operator<<(std::ostream &o, AForm const &form)
{
	o << "Form name: " << form.getName() << ", with Sign Grade: ";
	o << form.getSignGrade() << ", Execute Grade: " << form.getExecuteGrade();
	o << ", Signed: ";
	if(form.getSigned())
		std::cout << "[true]" << std::endl;
	else
		std::cout << "[false]" << std::endl;
	return o;
}