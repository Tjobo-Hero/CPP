/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 12:42:02 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 14:00:38 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;

		Form(void);
		
	public:
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const &src);
		~Form(void);
		
		Form&			operator=(Form const &obj);
		std::string const&		getName(void) const;
		int						getSignGrade(void) const;
		int						getExecuteGrade(void) const;
		bool					getSigned(void) const;
		void					beSigned(Bureaucrat const &obj);

		

	
	class GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};	
};

std::ostream&		operator<<(std::ostream &o, Form const &form);

#endif
