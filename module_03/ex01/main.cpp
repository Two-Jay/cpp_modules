/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 20:41:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <iomanip>

# define HEAD_WIDTH 70

int main( void ) {
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< ClapTrap Test Cases >==" << std::endl << std::endl << std::setfill(' ');
    {
        ClapTrap clap("Hassan");

        clap.takeDamage(5);
        clap.beRepaired(50);
        clap.attack("khalid");
        clap.takeDamage(30);
        clap.takeDamage(10);
        clap.takeDamage(999);
        clap.beRepaired(100);
    }
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< ScavTrap Basic Test Cases >==" << std::endl << std::endl << std::setfill(' ');
    {
        {
            ScavTrap scav("Hussam");
            
            scav.takeDamage(40);
            scav.beRepaired(50);
            scav.attack("khalid");
            scav.takeDamage(30);
            scav.takeDamage(10);
            scav.guardGate();
            scav.takeDamage(999);
            scav.beRepaired(100);
        }

        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< heap-allocated ScavTrap Test Cases >==" << std::endl << std::endl << std::setfill(' ');
        
        ScavTrap *scav1 = new ScavTrap("ibn Sina");
        ScavTrap scav2 = *scav1;

        scav1->takeDamage(40);
        scav1->beRepaired(50);
        scav1->attack("khalid");
        scav1->takeDamage(30);
        scav1->takeDamage(10);
        scav1->guardGate();
        scav1->takeDamage(999);
        scav1->beRepaired(100);

        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< copied-constructed ScavTrap Test Cases >==" << std::endl << std::endl << std::setfill(' ');

        // ScavTrap scav2 = *scav1;
        std::cout << "address of original object : " << scav1 << std::endl;
        std::cout << "address of copied object : " << &scav2 << std::endl;

        delete scav1;

        scav2.takeDamage(40);
        scav2.beRepaired(50);
        scav2.attack("khalid");
        scav2.takeDamage(30);
        scav2.takeDamage(10);
        scav2.guardGate();
        scav2.takeDamage(999);
        scav2.beRepaired(100);
    }
    system("leaks ScavTrap > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}