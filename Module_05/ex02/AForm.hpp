/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 12:42:02 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:34:32 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:

		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;

		AForm(void);
		
	public:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(AForm const &src);
		virtual ~AForm(void);
		
		AForm&			operator=(AForm const &obj);
		std::string const&		getName(void) const;
		int						getSignGrade(void) const;
		int						getExecuteGrade(void) const;
		bool					getSigned(void) const;
		void					beSigned(Bureaucrat const &obj);
		virtual void			execute(Bureaucrat const &obj) const = 0;
			
	class GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};
	class GradeTooLowToExecute : public std::exception
	{
		virtual const char*	what() const throw();
	};
	class FormNotSigned : public std::exception
	{
		virtual const char*	what() const throw();
	};	
};

std::ostream&		operator<<(std::ostream &o, AForm const &form);

#endif
