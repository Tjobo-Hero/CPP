/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:02:26 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/02 13:29:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int number) : _maxSize(number), _currentSize(0)
{
	return;
}

Span::~Span(void)
{
	std::cout << "Destructor called" << std::endl;
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

//Fucntion that stores a single number that will be used to fill it.
// Attempting to add a new number if there are already N of them stored 
// in the object is an error and should result in an exception.
void			Span::addNumber(int n)
{
	if (this->_currentSize == this->_maxSize)
		throw ClassIsFullException();
	else
	{
		this->_array.push_back(n);
		this->_currentSize += 1;
	}
	return;
}

void			Span::printArray(void) const
{
	for (unsigned int i = 0; i < this->getCurrentSize(); i++)
		std::cout << "i: [" << i << "] = " << this->_array[i] << std::endl;
}

//Function that finds out respcetivley the shortest span between all numbers
//contained in the object and return it. If there’s no numbers stored, or only one,
// there is no span to find, and you will throw an exception.
int				Span::shortestSpan(void)
{
	double result = -1;
	
	if (this->_array.size() < 2)
		throw NoOrNotEnoughSpanException();
	else
	{
		std::vector<int>::const_iterator	it = this->_array.begin() + 1;
		std::vector<int>::const_iterator	ite = this->_array.end();

		std::sort(this->_array.begin(), this->_array.end());
		for (; it != ite; it++ )
			if (result == -1 || *it - *(it - 1) < result)
				result = *it - *(it - 1);
	}
	return result;
}

//Function that finds out respcetivley the longest span between all numbers
//contained in the object and return it. If there’s no numbers stored, or only one,
// there is no span to find, and you will throw an exception.
int				Span::longestSpan(void)
{
	double result = -1;
	
	if (this->_array.size() < 2)
		throw NoOrNotEnoughSpanException();
	else
	{
		result = (*max_element(this->_array.begin(), this->_array.end()) - (*min_element(this->_array.begin(), this->_array.end())));
		if (!result)
			throw ResultFailedException();
	}
	return result;
}

const char*		Span::ClassIsFullException::what() const throw()
{
	return "Class is Full exception is thrown, well because the array is full.";
}

const char*		Span::NoOrNotEnoughSpanException::what() const throw()
{
	return "No or not Enough Exception is thrown, well because either they array is empty or there's only one element";
}

const char*		Span::ResultFailedException::what() const throw()
{
	return "Something went wrong with calculating the result of shortest span or longest span";
}

std::ostream&		operator<<(std::ostream &o, Span const &obj)
{
	o << "\nMax size:     [" << obj.getMaxSize() << "]"<< std::endl;
	o << "Current size: [" << obj.getCurrentSize() << "]" << std::endl;
	obj.printArray();
	return o;
}