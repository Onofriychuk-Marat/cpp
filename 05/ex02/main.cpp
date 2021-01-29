/* ************************************************************************** */
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));
	Bureaucrat bureaucratOne("bureaucratOne", 1);
	std::cout << bureaucratOne << std::endl;
	Bureaucrat bureaucratTwo("bureaucratTwo", 25);
	std::cout << bureaucratTwo << std::endl;



	std::cout << std::endl << "---------ShrubberyCreationForm-----------" << std::endl;
	Form *shrub = new ShrubberyCreationForm("shrubbery");
	std::cout << *shrub << std::endl;
	shrub->beSigned(bureaucratOne);
	shrub->execute(bureaucratTwo);
	std::cout << *shrub << std::endl;
	try
	{
		ShrubberyCreationForm shrub = ShrubberyCreationForm("Bender");
		shrub.execute(bureaucratTwo);	
	}
	catch(std::exception const &e)
	{
		std::cerr << "1) Error: " <<  e.what() << std::endl;
	}



	std::cout << std::endl << "---------PresidentialPardonForm-----------" << std::endl;
	Form *pres = new PresidentialPardonForm("bureaucrat");
	std::cout << *pres << std::endl;
	bureaucratOne.signForm(*pres);
	pres->execute(bureaucratOne);
	std::cout << *pres << std::endl;
	try
	{
		bureaucratTwo.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << "2) Error: " <<  e.what() << std::endl;
	}



	std::cout << std::endl << "---------RobotomyRequestForm-----------" << std::endl;
	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(bureaucratOne);
	bureaucratTwo.executeForm(*robot);
	std::cout << *robot << std::endl;
	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		robot.execute(bureaucratTwo);	
	}
	catch(std::exception const &e)
	{
		std::cerr << "3) Error: " <<  e.what() << std::endl;
	}
	return (0);
}
