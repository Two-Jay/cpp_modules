#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main(void)
{
	{
		Weapon	club = Weapon("crude spike club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Some other type of club");
		bob.attack();
	}
	return 0;
}