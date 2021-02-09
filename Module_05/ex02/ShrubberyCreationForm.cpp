/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 15:53:21 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 17:19:25 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Shubbery Creation Form was created with target: [" << this->_target << "]." << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137), _target(src._target)
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	if (this != &obj)
	{
		Form::operator=(obj);
		this->_target = obj._target;
	}
	return *this;
}

void						ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw Form::GradeTooLowException();
	else if (this->getSigned() == false)
		throw Form::FormNotSigned();
	else
	{
		std::ofstream file;
		std::string filename = this->_target + "_shrubbery";
		file.open(filename, std::ofstream::out | std::ofstream::trunc);
		if(!file.is_open())
		{
			std::cout << "Opening [" << filename << "] = FAILURE.\nPlease check the file name and try again." << std::endl;
			exit(EXIT_FAILURE);
		}
		file <<	"     	   ****\n";
        file << "        ********\n";
        file << "        **  ******\n";
        file << "         *   ******     ******\n";
        file << "             ******   *********\n";
        file << "              ****  *****   ***\n";
        file << "              ***  ***     **\n";
        file << "       *************       *\n";
        file << "      ******************\n";
        file << "     *****   H*****H*******\n";
        file << "     ***     H-___-H  *********\n";
        file << "      ***    H     H      *******\n";
        file <<	"       **    H-___-H        *****\n";
        file <<	"        *    H     H         ****\n";
        file <<	"             H     H         ***\n";
        file << "             H-___-H         **\n";
        file <<	"             H     H         *\n";
        file << "             H-___-H\n\n";

		file << "             ALOHA!!\n";
		file <<	" Shubbery tvan-cit loves them coco-nuts!\n";
	}
	return;
}
