
#include "Form.hpp"
#include <iostream>

Form::Form() : _name("Default"), _signed(false), _signGrade(6), _execGrade(12) {}

Form::Form(std::string name, int sign, int exec) : _name(name), _signGrade(sign), _execGrade(exec)
{
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	else if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else
		this->_signed = 0;
}

Form::Form(Form const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
}

Form::~Form() {}

Form &Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	return *this;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecGrade() const
{
	return (this->_execGrade);
}

void Form::setSigned()
{
	this->_signed = 1;
}

void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->_signGrade)
	{
		throw Form::GradeTooLowException();
	}
	else if (this->_signed == 1)
		std::cout << src.getName() << " cannot sign " << this->_name << " because the form is already signed." << std::endl;
	else
		std::cout << src.getName() << " signs " << this->_name << "." << std::endl;
	this->setSigned();
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << ", Form sign require : grade " << src.getSignGrade() << ", exec require : " << src.getExecGrade() << ", signed status : " << src.getSigned() << std::endl;
	return o;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &)
{
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
