/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 15:12:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/19 15:21:24 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string literal) : _literal(literal), _is_negative(0), _dot(0), _precision(1), _char_check(false), _int_check(false)
{
	return;
}

Convert::Convert(Convert const &src)
{
	*this = src;
	return;
}

Convert::~Convert(void)
{
	return;
}

Convert&				Convert::operator=(Convert const &obj)
{
	if (this != &obj)
	{
		this->_literal = obj._literal;
		this->_is_negative = obj._is_negative;
		this->_dot = obj._dot;
		this->_precision = obj._precision;
		this->_char_check = obj._char_check;
		this->_int_check = obj._int_check;
	}
	return *this;
}

std::string const&		Convert::getLiteral(void) const
{
	return this->_literal;
}

void					Convert::setIsNegative(int n)
{
	this->_is_negative = n;
	return;
}

int						Convert::getIsNegative(void) const
{
	return this->_is_negative;
}

void					Convert::setDot(int n)
{
	this->_dot += n;
	return;
}

int						Convert::getDot(void) const
{
	return this->_dot;
}

void					Convert::setPrecision(int n)
{
	this->_precision += n;
	return;
}

int						Convert::getPrecision(void) const
{
	return this->_precision;
}

bool					Convert::getCharCheck(void) const
{
	return this->_char_check;
}

bool					Convert::getIntCheck(void) const
{
	return this->_int_check;
}

void					Convert::checkIntMinMax(double nb)
{
	if (nb < INT_MIN || nb > INT_MAX)
	{
		this->_char_check = true;
		this->_int_check = true;
	}
	return;
}

void					Convert::checkPseudoLiteral(void) const
{
	std::cout << "Input is of type [Pseudo literal]" << std::endl;
	std::cout << "char:   impossible" << std::endl;
	std::cout << "int:    impossible" << std::endl;
	if (this->_literal == "+inf" || this->_literal == "+inff")
		std::cout << "float:  +inff\n" << "double: +inf" << std::endl;
	if (this->_literal == "-inf" || this->_literal == "-inff")
		std::cout << "float:  -inff\n" << "double: -inf" << std::endl;
	if (this->_literal == "nan" || this->_literal == "nanf")
		std::cout << "float:  nanf\n" << "double: nan" << std::endl;
	return;	
}

void					Convert::charFunction(void)
{
	std::cout << "Input is of type [char], please see conversion below:" << std::endl;
	convertChar();
	return;
}

void					Convert::convertChar(void)
{
	char	char_value = this->_literal[0];
	printChar(this->_literal[0]);
	printInteger(static_cast<int>(char_value));
	printFloat(static_cast<float>(char_value));
	printDouble(static_cast<double>(char_value));
	return;
}

void					Convert::printChar(char c) const
{
	std::cout << "char:   ";
	if (isprint(c) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
	return;
}

void					Convert::integerFunction(void)
{
	std::cout << "Input is of type [integer], please see conversion below:" << std::endl;
	convertInteger();
	return;
}

void					Convert::convertInteger(void)
{
	double integer_value = atof(this->_literal.c_str());
	checkIntMinMax(integer_value);
	printChar(static_cast<char>(integer_value));
	printInteger(integer_value);
	printFloat(static_cast<float>(integer_value));
	printDouble(static_cast<double>(integer_value));	
	return;
}

void					Convert::printInteger(int i) const
{
	std::cout << "int:    ";
	if (_int_check == true)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << i << std::endl;
	return;
}

void					Convert::floatFunction(void)
{
	std::cout << "Input is of type [float], please see conversion below:" << std::endl;
	convertFloat();
	return;
}

void					Convert::convertFloat(void)
{
	double	float_value = atof(this->_literal.c_str());
	checkIntMinMax(float_value);
	printChar(static_cast<char>(float_value));
	printInteger(static_cast<int>(float_value));
	printFloat(float_value);
	printDouble(static_cast<double>(float_value));
	return;
}

void					Convert::printFloat(float fl) const
{
	std::cout << "float:  ";
	std::cout << std::fixed << std::setprecision(this->_precision) << fl  << 'f' << std::endl;
	return;
}

void					Convert::doubleFunction(void)
{
	std::cout << "Input is of type [double], please see conversion below: " << std::endl;
	convertDouble();
	return;
}

void					Convert::convertDouble(void)
{
	double	double_value = atof(this->_literal.c_str());
	checkIntMinMax(double_value);
	printChar(static_cast<char>(double_value));
	printInteger(static_cast<int>(double_value));
	printFloat(static_cast<float>(double_value));
	printDouble(double_value);
	return;
}

void					Convert::printDouble(double db) const
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(this->_precision) << db << std::endl;
	return;
}

std::ostream&			operator<<(std::ostream &o, Convert const &convert)
{
	o << "Literal: " << convert.getLiteral() << std::endl;
	o << "Is negative: " << convert.getIsNegative() << std::endl;
	o << "Dot: " << convert.getDot() << std::endl;
	o << "Precision: " << convert.getPrecision() << std::endl;
	o << "Char Check: " << convert.getCharCheck() << std::endl; 
	o << "Int Check: " << convert.getIntCheck() << "\n" << std::endl;
	return o;
}
