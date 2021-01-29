#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap one("utoomey");
    ScavTrap two("chuvak");

    srand(time(NULL));
    one.meleeAttack("cpp03");
    one.rangedAttack("cpp03");
    one.takeDamage(21);
    one.beRepaired(42);
    one.takeDamage(2);
    one.takeDamage(50);
    one.takeDamage(50);
    one.takeDamage(50);
    one.beRepaired(42);
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");
    one.vaulthunter_dot_exe("cpp03");

    std::cout << std::endl;

    two.meleeAttack("utoomey");
    two.rangedAttack("utoomey");
    two.takeDamage(21);
    two.beRepaired(42);
    two.takeDamage(2);
    two.takeDamage(50);
    two.takeDamage(50);
    two.takeDamage(50);
    two.beRepaired(42);
    two.challengeNewcomer("utoomey");
    two.challengeNewcomer("utoomey");
    two.challengeNewcomer("utoomey");
    two.challengeNewcomer("utoomey");
    two.challengeNewcomer("utoomey");
    return (0);
}