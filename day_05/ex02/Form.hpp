

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

  private:
	const std::string _name;
	std::string _target;
	bool _sign;
	const int _signGrade;
	const int _executeGrade;

  public:
	Form(void);
	Form(Form const &src);
	Form(std::string name, int signGrade, int executeGrade);
	virtual ~Form(void);
	bool getSign(void) const;
	void setSign(bool boolean);
	void setTarget(std::string target);
	std::string getTarget(void) const;
	std::string getName(void) const;
	int getSignGrade(void) const;
	int getExecutionGrade(void) const;
	virtual void execute(Bureaucrat const &) const = 0;

	void beSigned(Bureaucrat &bureaucrat);
	Form &operator=(Form const &rhs);

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
};

std::ostream &operator<<(std::ostream &o, Form &rhs);

#endif
