#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                signedState;
    const int           gradeSign;
    const int           gradeExecute;

public:
    Form(std::string const &name, int gradeSign, int gradeExecute);
    ~Form();

    class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};

    std::string const   &getName() const;
    bool                isSigned() const;
    int                 getGradeSign() const;
    int                 getGradeExecute() const;
    void                beSigned(Bureaucrat const &bureaucrat);

    Form(const Form &form);
    Form &operator=(const Form &form);
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif