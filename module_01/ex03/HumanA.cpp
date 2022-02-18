/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:27:01 by jekim             #+#    #+#             */
/*   Updated: 2022/02/17 16:27:01 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weaponREF) : name(name), weapon(weaponREF)
{
}

HumanA::~HumanA()
{   
}

void HumanA::attack(void)
{
    std::cout << this->name << "attacks with his " << this->weapon.getType() << "." << std::endl;
}

void HumanA::setWeapon(Weapon& Weapon)
{
    this->weapon = Weapon;
}