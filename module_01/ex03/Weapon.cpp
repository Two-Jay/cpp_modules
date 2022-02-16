#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon()
{
    std::cout << "[System : Weapon <basic type> was created.]" << std::endl;
}

const std::string& Weapon::getType()
{
    return this->name;
}