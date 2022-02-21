/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 20:44:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
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
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< FragTrap Basic Test Cases >==" << std::endl << std::endl << std::setfill(' ');
    {
        {
            FragTrap frag("Hussam");
            
            frag.takeDamage(40);
            frag.beRepaired(50);
            frag.attack("khalid");
            frag.takeDamage(30);
            frag.takeDamage(10);
            frag.highFivesGuys();
            frag.takeDamage(999);
            frag.beRepaired(100);
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< heap-allocated FragTrap Test Cases >==" << std::endl << std::endl << std::setfill(' ');
        
        FragTrap *frag1 = new FragTrap("ibn Sina");
        FragTrap frag2 = *frag1;

        frag1->takeDamage(40);
        frag1->beRepaired(50);
        frag1->attack("khalid");
        frag1->takeDamage(30);
        frag1->takeDamage(10);
        frag1->highFivesGuys();
        frag1->takeDamage(999);
        frag1->beRepaired(100);

        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< copied-constructed FragTrap Test Cases >==" << std::endl << std::endl << std::setfill(' ');

        // FragTrap frag2 = *frag1;
        std::cout << "address of original object : " << frag1 << std::endl;
        std::cout << "address of copied object : " << &frag2 << std::endl;

        delete frag1;

        frag2.takeDamage(40);
        frag2.beRepaired(50);
        frag2.attack("khalid");
        frag2.takeDamage(30);
        frag2.takeDamage(10);
        frag2.highFivesGuys();
        frag2.takeDamage(999);
        frag2.beRepaired(100);
    }
    system("leaks FragTrap > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}