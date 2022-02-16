#include "Zombie.hpp"

int main(void)
{
    Zombie zombie_on_stack = Zombie("Zombie_on_stack");
    Zombie* zombie_on_heap = newZombie("Zombie_on_heap");

    zombie_on_heap->announce();
    zombie_on_stack.announce();
    randomChump("random!");
    delete zombie_on_heap; 
    return (0);
}