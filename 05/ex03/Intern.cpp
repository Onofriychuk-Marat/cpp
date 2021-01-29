#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &) {}

Intern &Intern::operator=(const Intern &)
{
    return (*this);
}

Form*	createPresidential(std::string const & target) { return (new PresidentialPardonForm(target)); }
Form*	createRobotomy(std::string const & target) { return (new RobotomyRequestForm(target)); }
Form*	createShrubbery(std::string const & target) { return (new ShrubberyCreationForm(target)); }

std::string Intern::tolowerString(std::string const&val)
{
    std::string res;

    res = val;
    for (unsigned int i = 0; i < res.size(); i++)
    {
        res[i] = std::tolower(res[i]);
    }
    return (res);
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Form not found!");
}

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
    Form *form;
    std::string names[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    typedef Form* (*typeFunc)(std::string const & target);
    typeFunc funcs[] = {&createPresidential, &createRobotomy, &createShrubbery};

    for (int i = 0; i < 3; i++)
    {
        if (names[i] == tolowerString(formName))
        {
            form = funcs[i](target);
            std::cout << "Intern creates " << formName << std::endl;
            return (form);
        }
    }
    throw Intern::FormNotFound();
    return (nullptr);
}
