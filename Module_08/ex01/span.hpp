/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:02:29 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/02 10:59:11 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
	private:

		unsigned int		_maxSize;
		unsigned int		_currentSize;
		std::vector<int>	_array;	
		Span(void);
		
	public:
		Span(unsigned int number);
		Span(Span const &src);
		~Span(void);
		
		Span&			operator=(Span const &obj);		
		unsigned int 	getCurrentSize(void) const;
		unsigned int 	getMaxSize(void) const;
		void			printArray(void) const;
		
		void			addNumber(int n);
		int				shortestSpan(void);
		int				longestSpan(void);


	class ClassIsFullException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class NoOrNotEnoughSpanException : public std::exception
	{
		virtual const char*	what() const throw();
	};
	class ResultFailedException : public std::exception
	{
		virtual const char*	what() const throw();
	};
};

std::ostream&		operator<<(std::ostream &o, Span const &obj);

#endif