/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 20:43:03 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
    system("leaks ClapTrap > leaks_result; cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}