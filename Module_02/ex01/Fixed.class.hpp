/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:25:39 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 15:08:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{

private: 
	
	int					_fixedPointValue;
	static const int	_numberFractionalBits = 8;
	
public:

	Fixed(void);
	Fixed(const int n);
	Fixed(const float fl);	
	Fixed(Fixed const &src);
	~Fixed();
	
	Fixed&			operator=(Fixed const &rhs);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
	
};

std::ostream&		operator<<(std::ostream &o, Fixed const &i);

#endif
