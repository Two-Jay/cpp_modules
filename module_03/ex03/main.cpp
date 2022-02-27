/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 12:45:42 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <iomanip>

# define HEAD_WIDTH 70

int main( void ) {
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< DiamondTrap Basic Test Cases >==" << std::endl << std::endl << std::setfill(' ');
    {
        {
            DiamondTrap diamond("Hussam");
            
            diamond.attack("khalid");
            diamond.highFivesGuys();
            diamond.guardGate();
            diamond.whoAmI();
        }
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "" << std::endl << std::endl << std::setfill(' ');

    }
    system("leaks DiamondTrap > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}