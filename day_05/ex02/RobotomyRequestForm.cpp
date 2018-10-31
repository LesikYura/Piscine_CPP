
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form()
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form()
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= 45 && this->getSign() == true)
	{
		std::cout << "ZZZZ *drilling noises*" << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
		else
			std::cout << "It's a failure." << std::endl;
	}
	else if (this->getSign() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}