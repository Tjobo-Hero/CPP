/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 15:53:21 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:33:49 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm("ShrubberyCreationForm", 145, 137), _target(src._target)
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form destructed." << std::endl;
	return;
}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return *this;
}

std::string	const&			ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void						ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowToExecute();
	else if (this->getSigned() == false)
		throw AForm::FormNotSigned();
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
		file 	<< "											\n\n"
				<<	"     	   ****								\n"
        		<<	"        ********							\n"
        		<<	"        **  ******							\n"
        		<<	"         *   ******     ******				\n"
        		<<	"             ******   *********			\n"
        		<<	"              ****  *****   ***			\n"
        		<<	"              ***  ***     **				\n"
        		<<	"       *************       *				\n"
        		<<	"      ******************					\n"
        		<<	"     *****   H*****H*******				\n"
        		<<	"     ***     H-___-H  *********			\n"
        		<<	"      ***    H     H      *******			\n"
        		<<	"       **    H-___-H        *****			\n"
        		<<	"        *    H     H         ****			\n"
        		<<	"             H     H         ***			\n"
        		<<	"             H-___-H         **			\n"
        		<<	"             H     H         *				\n"
        		<<	"             H-___-H						\n\n"
				<<	"             ALOHA!!						\n"
				<<	" Shubbery tvan-cit loves them coco-nuts!	\n";

		std::cout << bureaucrat.getName() << " executed the form: " << this->getName() << ". Succesfully.";
		std::cout << " A text file has been made please see: "; 
		std::cout << this->_target << "_shrubbery file in this directory." << std::endl;
	}
	return;
}
