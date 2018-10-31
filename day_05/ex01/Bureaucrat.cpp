

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("none"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{

	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{

	this->_grade = rhs._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{

	return (this->_name);
}

int Bureaucrat::getGrade() const
{

	return (this->_grade);
}

void Bureaucrat::signForm(Form &src)
{

	if (this->_grade <= src.getSignGrade() && src.getSigned() == 0)
	{
		std::cout << this->_name << " signs " << src.getName() << std::endl;
		src.setSigned();
	}
	else if (this->_grade > src.getSignGrade())
	{
		std::cout << this->_name << " cannot sign " << src.getName() << " because his grade is too low." << std::endl;
	}
	else if (src.getSigned() == 1)
	{
		std::cout << this->_name << " cannot sign " << src.getName() << " because the form is already signed." << std::endl;
	}
}

void Bureaucrat::operator-=(int const num)
{

	if ((this->_grade + num) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += num;
}

void Bureaucrat::operator+=(int const num)
{

	if ((this->_grade - num) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= num;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{

	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &)
{
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error : Bureaucrat grade set too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error : Bureaucrat grade set too low");
}