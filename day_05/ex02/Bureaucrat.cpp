
#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("Default")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return *this;
}

const std::string Bureaucrat::getName(void)
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::executeForm(Form const &src) const
{
	if (this->getGrade() < src.getExecutionGrade())
	{
		std::cout << this->_name << " executes " << src.getTarget() << "." << std::endl;
		src.execute(*this);
	}
	else
		std::cout << "Cannot execute form because the bureaucrat's grade is too low." << std::endl;
}

void Bureaucrat::signForm(Form &src)
{
	if (src.getSign() == true)
		std::cout << _name << "cannot sign" << src.getName() << "because it has already been signed." << std::endl;
	else if (_grade <= src.getSignGrade())
	{
		src.setSign(true);
		std::cout << _name << " signs " << src.getName() << std::endl;
	}
	else
		std::cout << _name << "cannot sign" << src.getName() << "because his grade is too low." << std::endl;
}

Bureaucrat &Bureaucrat::operator+=(int amount)
{
	int newGrade = this->_grade - amount;
	if (newGrade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		this->_grade += amount;
	return *this;
}

Bureaucrat &Bureaucrat::operator-=(int amount)
{
	int newGrade = this->_grade + amount;
	if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += amount;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}