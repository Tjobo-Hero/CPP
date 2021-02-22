/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 13:30:33 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/22 11:14:28 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		write_error(std::string error_text, bool die)
{
	if (die)
	{
		std::cout << error_text << std::endl;
		exit (1);
	}
	else
	{
		std::cout << error_text << std::endl;
		return (0);
	}
	
}

int		check_type(Convert &all, std::string literal)
{
	const char *psuedoliteral[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++)
	{
		if (literal == psuedoliteral[i])
			return (1);
	}
	if (isprint(literal[0]) && !isdigit(literal[0]) && literal.length() == 1)
		return (2);
	if (literal[0] == '-')
		all.setIsNegative(1);
	for (int i = all.getIsNegative(); literal[i]; i++)
	{
		if(!isdigit(literal[i]))
			break;
		if (!literal[i + 1])
			return(3);		
	}
	int i = all.getIsNegative();
	for (; literal[i + 1]; i++)
	{
		if (all.getDot() == 1 && literal[i + 1] != 'f')
			all.setPrecision(1);
		if (!isdigit(literal[i]))
		{
			if (literal[i] != '.' || all.getDot() >= 1)
				return (6);
			all.setDot(1);
		}
	}
	if (all.getDot() == 0)
			return (6);
	if (literal[i] == 'f' && isdigit(literal[i - 1]))
			return (4);
	if (isdigit(literal[i]))
		return (5);
	return (6);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return write_error("Please provide one argument", false);
	if (argv[1][0] == 0)
		return write_error("The argument is empty, please provide a valid argument", false);
	Convert all = Convert(argv[1]);
	int type = check_type(all, argv[1]);
	if (type == 1)
		all.checkPseudoLiteral();
	else if (type == 2)
		all.charFunction();
	else if (type == 3)
		all.integerFunction();
	else if (type == 4)
		all.floatFunction();
	else if (type == 5)
		all.doubleFunction();
	else
		return write_error("Conversion impossible, please check input", true);
	return (0);
}
