/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:02:26 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/26 12:34:49 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int number) : _maxSize(number), _currentSize(0)
{
	return;
}

Span::~Span(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
} 

Span::Span(Span const &src)
{
	*this = src;
	return;
}

Span&			Span::operator=(Span const &obj)
{
	if (this != &obj)
	{
		this->_maxSize = obj._maxSize;
		this->_currentSize = obj._currentSize;
		this->_array = obj._array;
	}
	return *this;
}

unsigned int	Span::getCurrentSize(void) const
{
	return this->_currentSize;
}
unsigned int	Span::getMaxSize(void) const
{
	return this->_maxSize;
}

void			Span::addNumber(int n)
{
	if (this->_currentSize == this->_maxSize)
		throw ClassIsFullException();
	else
	{
		this->_array.push_back(n);
		this->_currentSize += 1;
		std::cout << "Added n: " << n << std::endl;
	}
	return;
}

void			Span::printArray(void) const
{
	for (unsigned int i = 0; i < this->getCurrentSize(); i++)
		std::cout << "i: [" << i << "] = " << this->_array[i] << std::endl;
}

int				Span::shortestSpan(void)
{
	int i = 6;
	return i;
}

int				Span::longestSpan(void)
{
	int i = 3;
	return i;
}

const char*		Span::ClassIsFullException::what() const throw()
{
	return "Class is Full exception is thrown, well because the array is full";
}

const char*		Span::NoOrNotEnoughSpan::what() const throw()
{
	return "No or not Enough exception is thrown, well because either they array is empty or there's only one element";
}

std::ostream&		operator<<(std::ostream &o, Span const &obj)
{
	o << "\nMax size:     [" << obj.getMaxSize() << "]"<< std::endl;
	o << "Current size: [" << obj.getCurrentSize() << "]" << std::endl;
	obj.printArray();
	return o;
}