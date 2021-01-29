#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    std::cout << std::endl << std::endl;

    Character* gendolf = new Character("gendolf");
	Enemy* enemy = new SuperMutant();

	std::cout << *gendolf;
	me->equip(pr);
	gendolf->equip(pr);
	std::cout << *me << *gendolf;
	me->attack(enemy);
	gendolf->attack(enemy);
	std::cout << *me << *gendolf;
	me->attack(enemy);
	gendolf->attack(enemy);
	std::cout << *me << *gendolf;
	me->attack(enemy);
	me->attack(enemy);
	me->attack(enemy);
	me->attack(enemy);
	me->attack(enemy);
	std::cout << *me << *gendolf;
	me->recoverAP();
	me->attack(enemy);
	me->attack(enemy);
	me->attack(enemy);
	gendolf->equip(pf);
	gendolf->attack(enemy);
    return 0; 
}