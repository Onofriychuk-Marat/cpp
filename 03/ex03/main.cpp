#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    FragTrap utoomey("utoomey");
    ScavTrap chuvak("chuvak");
    ClapTrap libovski("libovski");
    NinjaTrap jobs("jobs");
    NinjaTrap wozniak("wozniak");

    std::cout << std::endl;
    jobs.meleeAttack("utoomey");
    jobs.rangedAttack("utoomey");
    jobs.takeDamage(21);
    jobs.beRepaired(42);
    jobs.takeDamage(2);
    jobs.takeDamage(50);
    jobs.takeDamage(50);
    jobs.takeDamage(50);
    jobs.beRepaired(42);
    jobs.ninjaShoebox(utoomey);
    jobs.ninjaShoebox(chuvak);
    jobs.ninjaShoebox(libovski);
    jobs.ninjaShoebox(wozniak);
    return (0);
}