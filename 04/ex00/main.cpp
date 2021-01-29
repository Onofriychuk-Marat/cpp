#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << std::endl << std::endl;

    Peon joeCopy(joe);
	Victim jimCopy(jim);
	robert.polymorph(joeCopy);
	robert.polymorph(jimCopy);
	joeCopy.getPolymorphed();
	jimCopy.getPolymorphed();
    return 0;
}