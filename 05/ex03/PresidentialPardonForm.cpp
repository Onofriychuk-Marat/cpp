#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
    Form("PresidentialPardonForm", 25, 5),
    target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm):
    Form(presidentialPardonForm),
    target(presidentialPardonForm.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}