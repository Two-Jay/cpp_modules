#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
    std::cout
        << "[System : "
        << "Zombie <" << "basic" << "> has been diployed"
        << "]" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout
        << "[System : "
        << "Zombie <" + get_name() + "> has been diployed"
        << "]" << std::endl;
}

Zombie::~Zombie()
{
    std::cout
        << "[System : "
        << "Zombie <" + get_name() + "> has been distroyed"
        << "]" << std::endl;
}

std::string Zombie::get_name(void)
{
    return this->name;
}

void Zombie::announce(void)
{
    std::cout 
        << get_name() << " : " << "BraiiiiiiinnnzzzZ"
        << std::endl;
}