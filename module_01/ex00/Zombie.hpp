
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    private :
        std::string name;
        Zombie();

    public :
        Zombie(std::string name);
        ~Zombie();
        std::string get_name(void);
        void announce(void);
};

Zombie* zombieHorde(int n);
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif