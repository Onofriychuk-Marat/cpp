#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string name;
    int         grade;

public:
    Bureaucrat(std::string const &name, int grade);
    ~Bureaucrat();

    class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};

    std::string const &getName() const;
    int         getGrade() const;
    void        raise_grade();
    void        reduce_grade();

    Bureaucrat(const Bureaucrat &bureaucrat);
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif