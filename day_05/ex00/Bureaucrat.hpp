
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &);
	void operator+=(int const num);
	void operator-=(int const num);

	std::string	getName() const;
	int			getGrade() const;

	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &);
		~GradeTooHighException() throw();
		GradeTooHighException &operator=(GradeTooHighException const &);
		virtual const char *what() const throw();
	};

	class GradeTooLowException
	{
	  public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &);
		~GradeTooLowException() throw();
		GradeTooLowException &operator=(GradeTooLowException const &);
		virtual const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif