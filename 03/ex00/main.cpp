#include "FragTrap.hpp"

int main(void)
{
    FragTrap one("utoomey");

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
    return (0);
}