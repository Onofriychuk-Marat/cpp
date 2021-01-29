#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bureaucrat("bureaucrat", 1);
    std::cout << bureaucrat << std::endl;

    std::cout << std::endl << std::endl;

    try
    {
        Form form("form", -1, 32);
    }
    catch(const std::exception& e)
    {
        std::cout << "Error:" <<  e.what() << std::endl;
    }
    try
    {
        Form form("form", 200, 32);
    }
    catch(const std::exception& e)
    {
        std::cout << "Error:" << e.what() << std::endl;
    }

    Form form("form", 15, 23);
    form.beSigned(bureaucrat);
    std::cout << std::boolalpha;
    std::cout << "isSigned: " << form.isSigned() << std::endl;
    std::cout << "getGradeSign: " << form.getGradeSign() << std::endl;
    std::cout << "getGradeExecute: " << form.getGradeExecute() << std::endl;
    std::cout << form;
    bureaucrat.signForm(form);
    return (0);
}