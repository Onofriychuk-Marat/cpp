#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    std::string tolowerString(std::string const&);

public:
    Intern();
    ~Intern();
    Form *makeForm(std::string const &formName, std::string const &target);

    class FormNotFound : public std::exception {
        const char* what() const throw();
    };

    Intern(const Intern &intern);
    Intern &operator=(const Intern &intern);
};

#endif