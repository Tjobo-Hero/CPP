/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:10:36 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 12:16:54 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{

private: 
	
	int					_fixedPointValue;
	static const int	_numberFractionalBits = 8;
	
public:

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed();
	
	Fixed&			operator=(Fixed const &rhs);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	
};

std::ostream&		operator<<(std::ostream &o, Fixed const &i);

#endif
