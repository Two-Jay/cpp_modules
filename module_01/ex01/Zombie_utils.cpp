#include "Zombie.hpp"
#include <ctime>

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);   
    return (zombie);
}

void randomChump(std::string name)
{
    Zombie var_zombie = Zombie(name);

    var_zombie.announce();
    return ;
}

Zombie* zombieHorde(int n)
{
    Zombie* ret = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        ret[i].set_name("horde_zombie");
    }
    return ret;
}
