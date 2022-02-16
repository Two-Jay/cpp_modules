#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("crude spike club");

		std::cout << "type : " << club.getType() << std::endl;
		club.setType("Some other type of club");
		std::cout << "type : " << club.getType() << std::endl;
	}
	return 0;
}