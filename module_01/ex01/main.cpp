#include "Zombie.hpp"

int main(void)
{
    Zombie* Zombie_ptr = zombieHorde(10);
    for (int i = 0; i < 10; i++)
    {
        Zombie_ptr[i].announce();
    }
    delete[] Zombie_ptr; 
    return (0);
}