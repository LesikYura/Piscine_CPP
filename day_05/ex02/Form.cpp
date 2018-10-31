

#include "Form.hpp"
#include <iostream>

Form::Form(void) : _name("Default"), _sign(false), _signGrade(50), _executeGrade(20)
{
}

Form::Form(std::string name, int signGrade, int executeGrade) : _name(name),
																_sign(false),
																_signGrade(signGrade),
																_executeGrade(executeGrade)
{
}

Form::Form(Form const &src) : _name(src._name),
							  _sign(src._sign),
							  _signGrade(src._signGrade),
							  _executeGrade(src._executeGrade)
{
	*this = src;
}

Form::~Form(void)
{
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_sign = rhs._sign;
	}
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSign() const
{
	return _sign;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

int Form::getExecutionGrade(void) const
{
	return _executeGrade;
}

std::string Form::getTarget(void) const
{
	return this->_target;
}

void Form::setTarget(std::string target)
{
	_target = target;
}

void Form::setSign(bool boolean)
{
	_sign = boolean;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (_sign != true)
	{
		if (bureaucrat.getGrade() <= this->getSignGrade())
		{
			this->setSign(true);
			std::cout << "The form " << _name << " has been correctly signed by " << bureaucrat.getName() << std::endl;
		}
		else
		{
			throw Form::GradeTooLowException();
		}
	}
}

std::ostream &operator<<(std::ostream &o, Form &rhs)
{
	if (rhs.getSign() == true)
		o << "Form " << rhs.getName() << ", signing grade required: " << rhs.getSignGrade() << ", execution grade required:: " << rhs.getExecutionGrade() << ", sign status: signed." << std::endl;
	else
		o << "Form " << rhs.getName() << ", signing grade required: " << rhs.getSignGrade() << ", execution grade required:: " << rhs.getExecutionGrade() << ", sign status: waiting for signature." << std::endl;
	return o;
}

Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &)
{
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form is too high");
}

Form::GradeTooLowException::GradeTooLowException()
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}
