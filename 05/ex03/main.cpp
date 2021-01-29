#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));
	Intern someIntern;

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat francis("Francis", 25);
	std::cout << francis << std::endl;

	Form *shrub = someIntern.makeForm("Shrubbery Creation", "home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(francis);

	Form *pres = someIntern.makeForm("Presidential Pardon", "Francis");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = someIntern.makeForm("Robotomy Request", "Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(francis);
	francis.executeForm(*robot);
	francis.executeForm(*robot);

	std::cout << std::endl << std::endl;
	try
	{
		Form *ran = someIntern.makeForm("Random Form", "nobody");
		std::cout << ran << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
