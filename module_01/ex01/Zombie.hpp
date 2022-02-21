/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:24:38 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 20:24:41 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Zombie* zombieHorde(int n, std::string name);
Zombie* newZombie(std::string name);
void randomChump(std::string name);
std::string random_name_creator(void);

#endif