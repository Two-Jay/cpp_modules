/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:46:03 by jekim             #+#    #+#             */
/*   Updated: 2022/02/18 20:16:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB() {}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name) : name(name)
{
}

void HumanB::setWeapon(Weapon& Weapon)
{
    this->weapon = &Weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << "." << std::endl;    
}
