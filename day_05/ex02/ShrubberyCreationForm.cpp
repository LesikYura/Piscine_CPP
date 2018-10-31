
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form()
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form()
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string name = this->getTarget() + "_shrubbery";
	const char *fileName = name.c_str();
	if (executor.getGrade() <= 137 && this->getSign() == true)
	{
		std::ofstream ofs(fileName);
		if (ofs)
		{
			ofs << "*****************************************" << std::endl
				<< "*           .             . 			*" << std::endl
				<< "*          / |           / |			*" << std::endl
				<< "*         /   |         / . |			*" << std::endl
				<< "*         | .  |       /  . |			*" << std::endl
				<< "*         | .   |     |  .. |			*" << std::endl
				<< "*         | ..  | _._ |  .. |			*" << std::endl
				<< "*          |..  ./   |.  .. |			*" << std::endl
				<< "*           |. | xxxxx |  ./			*" << std::endl
				<< "*            |/ x ,-. x|__/				*" << std::endl
				<< "*         .--/ ,-'ZZZ`-.  |--.			*" << std::endl
				<< "*         (  ,'ZZ;ZZ;Z;Z`..  )			*" << std::endl
				<< "*         .,'ZZ;; ;; ; ;ZZ `..			*" << std::endl
				<< "*       ._###ZZ @  .  @  Z####`			*" << std::endl
				<< "*        ````Z._  ~~~  _.Z``|			*" << std::endl
				<< "*         _/ ZZ `-----'  Z   |			*" << std::endl
				<< "*        ;   ZZ /.....|  Z    |;;		*" << std::endl
				<< "*       ;/__ ZZ/..  ...| Z     |;		*" << std::endl
				<< "*      ##'#.|_/.      _.|ZZ     |		*" << std::endl
				<< "*      ##....../      |..|Z     |;		*" << std::endl
				<< "*     / `-.___/|      |../Z     |		*" << std::endl
				<< "*    |    ZZ   |      |./  Z    |;;		*" << std::endl
				<< "*   ;|   Z    /x|____/x     Z   |;		*" << std::endl
				<< "*   ;|  Z   /xxxxxxxxxxx|   Z __|		*" << std::endl
				<< "*    ;|Z  /'##xxxxxxxx###`|__Z .|		*" << std::endl
				<< "*     Z|/#| ####xxxx####  |##|Z ..|		*" << std::endl
				<< "*  __Z /#/   ####x####    |###|Z_..|	*" << std::endl
				<< "* /NN||#|      `###`      |###|NN|..|	*" << std::endl
				<< "* |NN||#|  ____							*" << std::endl
				<< "* __.......  _/|/ |__/..|				*" << std::endl
				<< "* `-'  `-..###########|_/##/  /.../		*" << std::endl
				<< "*        `|#####/   |####|   /../		*" << std::endl
				<< "*          .xxx#|   |xxx.   |./			*" << std::endl
				<< "*         |x' `x|   |'  `|   -			*" << std::endl
				<< "*         `~~~~'    `~~~~'				*" << std::endl
				<< "*****************************************" << std::endl
				<< std::endl;
		}
		ofs.close();
	}
	else if (this->getSign() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
