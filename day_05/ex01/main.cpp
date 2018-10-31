
#include "Bureaucrat.hpp"
#include "Form.hpp"
// #include <iostream>

int main(void)
{
	std::cout << "********* Bureaucrats *********" << std::endl;

	Bureaucrat Buro1 = Bureaucrat("Mike", 1);
	std::cout << Buro1;
	Bureaucrat Buro2 = Bureaucrat("John", 150);
	std::cout << Buro2;
	Bureaucrat Buro3 = Bureaucrat("Harold", 34);
	std::cout << Buro3;

	try
	{
		Buro1 += 1;
		std::cout << Buro1;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl
				  << "---> Degrading 1 grade to John" << std::endl;
		Buro2 -= 1;
		std::cout << Buro2;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl
				  << "---> Adding 6 grade to Harold" << std::endl;
		Buro3 += 6;
		std::cout << Buro3;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl
				  << "---> Trying to instanciate a bureaucrat grade -1" << std::endl;
		Bureaucrat Buro4 = Bureaucrat("Philipp", -1);
		std::cout << Buro4;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl
				  << "---> Trying to instanciate a bureaucrat grade 151" << std::endl;
		Bureaucrat Buro5 = Bureaucrat("Charles", 151);
		std::cout << Buro5;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl
			  << "---> Instancying copy from Buro3" << std::endl;
	Bureaucrat Buro6(Buro3);
	std::cout << Buro6;

	std::cout << "*******************************" << std::endl;

	std::cout << std::endl
			  << "************ Forms ************" << std::endl;

	Form Form1 = Form("Billing", 110, 40);
	std::cout << Form1;
	Form Form2(Form1);
	std::cout << Form2;
	Form Form3 = Form();
	std::cout << Form3;
	std::cout << std::endl;
	try
	{
		Buro1.signForm(Form1);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form3.beSigned(Buro2);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form2.beSigned(Buro3);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "*******************************" << std::endl
			  << std::endl;
	return (0);
}
