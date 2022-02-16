#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon()
{
    std::cout << "[System : Weapon <basic type> was created.]" << std::endl;
}

Weapon::Weapon(std::string type)
{
    this->name = type;
    std::cout << "[System : Weapon <" << this->name << "> was created.]" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "[System : Weapon <" << this->name << "> has been distroyed.]" << std::endl;
}

const std::string& Weapon::getType()
{
    return this->name;
}

void Weapon::setType(std::string type)
{
    std::string old_name = this->name;
    this->name = type;
    
    std::cout << "[System : Weapon <" << old_name << "> was changed as <" << this->name << ">.]" << std::endl;    
}