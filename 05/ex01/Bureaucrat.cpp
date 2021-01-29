#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
    if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
    this->name = name;
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    this->name = bureaucrat.name;
    this->grade = bureaucrat.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    this->name = bureaucrat.name;
    this->grade = bureaucrat.grade;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

std::string const &Bureaucrat::getName() const
{
    return (this->name);
}

int         Bureaucrat::getGrade() const
{
    return (this->grade);
}

void        Bureaucrat::raise_grade()
{
    this->grade--;
    if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void        Bureaucrat::reduce_grade()
{
    this->grade++;
    if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void        Bureaucrat::signForm(Form &form) const
{
    if (form.isSigned())
    {
        std::cout << this->name << " sign ";
        std::cout << form.getName() << std::endl;
    }
    else if (form.getGradeSign() < this->grade)
    {
        std::cout << this->name << " connat sign ";
        std::cout << form.getName() << " because grade is too low" << std::endl;
    }
    form.beSigned(*this);
}

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade ";
    out << bureaucrat.getGrade() << std::endl;
    return (out);
}
