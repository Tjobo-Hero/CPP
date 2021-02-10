/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 15:53:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:33:58 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm("RobotomyRequestForm", 72, 45), _target(src._target)
{
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Request Form destructed." << std::endl;
	return;
}

RobotomyRequestForm&		RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return *this;
}

std::string	const&			RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}
void						RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowToExecute();
	else if (this->getSigned() == false)
		throw AForm::FormNotSigned();
	else
	{
		std::cout << "* Tsjssjjsuueueuh drill drill Rrrrrddrdrdrdr *" << std::endl;
		int	randomNumber;
		static bool first = false;
		
		if(!first)
		{	
			srand ( time(NULL) );
			first = true;
		}
		randomNumber = rand() % 2;
		if(randomNumber == 0)
			std::cout << "Oh no this time we could not robotomize " << this->_target << " hopefulle next time. You have a 50% change it works" << std::endl;
		else
		{
			std::cout << this->_target << " has been robotomized succesfully!" << std::endl;
		}
	}
	
	return;
}
