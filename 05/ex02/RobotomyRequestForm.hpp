#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string const   target;

public:
    RobotomyRequestForm(std::string const &target);
    virtual ~RobotomyRequestForm();

    void    execute(Bureaucrat const &executor) const;

    RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyRequestForm);
};

#endif