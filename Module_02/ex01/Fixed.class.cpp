/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:25:36 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 15:28:56 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called." << std::endl;
	return;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int Constructor called." << std::endl;
	this->_fixedPointValue = n << _numberFractionalBits;
	return;
}

Fixed::Fixed(const float fl)
{
	std::cout << "Float Constructor called." << std::endl;
	this->_fixedPointValue = roundf(fl * (1 << _numberFractionalBits));
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

float		Fixed::toFloat(void) const
{
	return (float)this->_fixedPointValue / (1 << _numberFractionalBits);
}

int			Fixed::toInt(void) const
{
	return (int)this->_fixedPointValue >> _numberFractionalBits;
}

Fixed&		Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	
	if(this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

int				Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void			Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
	return;
}

std::ostream&		operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return o;
}