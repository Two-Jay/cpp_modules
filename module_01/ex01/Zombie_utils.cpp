/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:24:33 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 20:24:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Zombie* zombieHorde(int n, std::string name)
{
    Zombie* ret = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
        ret[i].set_name(name);
    }
    return ret;
}
