/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 11:44:47 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 17:16:30 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		std::string 	_name;
		int				_grade;
		Bureaucrat(void);

	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		Bureaucrat&			operator=(Bureaucrat const &obj);
		std::string const&	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form const &form) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};
	
};

std::ostream&		operator<<(std::ostream &o, Bureaucrat const &bureaucrat);

#endif
