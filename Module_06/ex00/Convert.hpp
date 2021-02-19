/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 13:34:33 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/17 17:08:27 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>

class Convert
{
	private:

		std::string _literal;
		int			_is_negative;
		int			_dot;
		int			_afterDot;
		int			_precision;
		// char		_char;
		// float		_float;
		// double		_double;
		// int			_negative;
		// int			_num_fixed;
		Convert(void);

	public:
		Convert(std::string literal);
		Convert(Convert const &src);
		~Convert(void);
		 Convert&					operator=(Convert const &obj);
		
		void						setIsNegative(int n);
		int							getIsNegative(void) const;
		
		std::string const&			getLiteral(void) const;

		void						setDot(int n);
		int							getDot(void) const;

		void						setPrecision(int n);
		int							getPrecision(void) const;

		void						setAfterDot(int n);
		int							getAfterDot(void) const;
		
		void						checkPseudoLiteral(void) const;
		
		void						charFunction(void);
		void						convertChar(void);
		void						printChar(char c) const;

		void						integerFunction(void);
		void						convertInteger(void);
		void						printInteger(int i) const;

		void						floatFunction(void);
		void						convertFloat(void);
		void						printFloat(float fl) const;

		void						doubleFunction(void);
		void						convertDouble(void);
		void						printDouble(double db) const;
};

#endif
