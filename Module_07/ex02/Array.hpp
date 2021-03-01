/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:50:22 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/01 14:16:09 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <string>

template< typename T >
class Array
{
	private:

		unsigned int	_n;
		T 				*_array;
		
	public:

		Array() : _n(0), _array(NULL){ return; };
		Array(unsigned int n) : _n(n), _array(new T[n]) { return; }
		~Array()
		{ 
			std::cout << "Destructor called" << std::endl; 
			delete [] _array; 
			return; 
		}
		Array(Array const &src)
		{
			this->_n = src._n;
			this->_array = new T[src._n];
			for (unsigned int i = 0; i < src._n; i++)
				this->_array[i] = src._array[i];
		}

		Array&			operator=(Array const &obj)
		{
			if (this != &obj)
			{
				this->_n = obj._n;
				if (this->_array)
					delete [] this->_array;
				this->_array = new T[obj._n];
				for (unsigned int i = 0; i < obj._n; i++)
					this->_array[i] = obj._array[i];	
			}
			return *this;
		}

		T&				operator[](const unsigned int index)
		{
			if (index >= this->_n || index < 0)
				throw ElementOutOfLimitsException();
			else
				return this->_array[index];
		}

		T&				operator[](const unsigned int index)
		{
			if (index >= this->_n || index < 0)
				throw ElementOutOfLimitsException();
			else
				return this->_array[index];
		}
		
		unsigned int			size(void) const
		{
			return this->_n;
		}
		
		T*			getArray(void) const
		{
			return _array;
		}
		
		class ElementOutOfLimitsException : public std::exception
		{
			virtual const char*	what() const throw(){
				return "This element is out of limits";
			}
		};

};

#endif

template< typename T >
std::ostream&	operator<<(std::ostream &o, Array< T > const &v)
{
	T*	 tmp = v.getArray(); 

	if (v.size() <= 0)
		o << "Array is empty" << std::endl;
	else
	{
		for (unsigned int i = 0;  i < v.size(); i++)
			o << tmp[i];
		o << std::endl;
	}
	return o;
}
