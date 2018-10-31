
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
  public:
	Form();
	Form(std::string name, int sign, int exec);
	Form(Form const &);
	~Form();
	Form &operator=(Form const &);

	std::string getName() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;
	void beSigned(Bureaucrat &);
	void setSigned();

	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &);
		~GradeTooHighException() throw();
		GradeTooHighException &operator=(GradeTooHighException const &);
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &);
		~GradeTooLowException() throw();
		GradeTooLowException &operator=(GradeTooLowException const &);
		virtual const char *what() const throw();
	};

  private:
	std::string const _name;
	bool _signed;
	int const _signGrade;
	int const _execGrade;
};
std::ostream &operator<<(std::ostream &, Form const &);

#endif
