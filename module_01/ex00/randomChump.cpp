#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie var_zombie = Zombie(name);

    var_zombie.announce();
    return ;
}