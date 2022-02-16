
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    private :
        std::string name;
        
        static int _nbZombie;

    public :
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        std::string get_name(void);
        void set_name(std::string name) { this->name = name;}
        void announce(void);
};

Zombie* zombieHorde(int n);
Zombie* newZombie(std::string name);
void randomChump(std::string name);
std::string random_name_creator(void);

#endif