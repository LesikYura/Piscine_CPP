

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

  private:
	Bureaucrat(void);
	const std::string _name;
	int _grade;

  public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);
	const std::string getName(void);
	int getGrade(void) const;
	void signForm(Form &src);
	void executeForm(Form const &form) const;

	Bureaucrat &operator=(Bureaucrat const &rhs);
	Bureaucrat &operator+=(int amount);
	Bureaucrat &operator-=(int amount);

	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const &src);
		~GradeTooHighException(void) throw();
		GradeTooHighException &operator=(GradeTooHighException const &rhs);
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const &src);
		~GradeTooLowException(void) throw();
		GradeTooLowException &operator=(GradeTooLowException const &rhs);
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs);

#endif
