/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:24:29 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 20:24:29 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int simple_stoi(std::string input)
{
    int ret = 0;
    for (int i = 0, len = input.length(); i < len; i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
            ret = ret * 10 + (input[i] - '0');
        else
            return -1;
    }
    return ret;
}

int main(void)
{
    std::string buf;
    std::string zombie_name = "horde_zombie";
    int nbr;

    std::cout << "insert number of Zombies : ";
    getline(std::cin, buf);
    nbr = simple_stoi(buf);
    if (nbr >= 0)
    {
        Zombie* Zombie_ptr = zombieHorde(nbr, zombie_name);
        for (int i = 0; i < nbr; i++)
        {
            Zombie_ptr[i].announce();
        }
        delete[] Zombie_ptr; 
    }
    return (0);
}