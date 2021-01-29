#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string const   target;

public:
    PresidentialPardonForm(std::string const &target);
    virtual ~PresidentialPardonForm();

    void execute(Bureaucrat const &execute) const;

    PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);
};

#endif