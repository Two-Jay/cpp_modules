/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:46:03 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 18:28:02 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB()
{
    // std::cout << "[System : HumanB <basic type> was created.]" << std::endl;
}

HumanB::~HumanB()
{
    // std::cout << "[System : HumanB <" << this->name << "> has been distroyed.]" << std::endl;
}

HumanB::HumanB(std::string name) : name(name)
{
    // std::cout << "[System : HumanB <basic type> was created.]" << std::endl;
}

void HumanB::setWeapon(Weapon& Weapon)
{
    this->weapon = &Weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << "." << std::endl;    
}
