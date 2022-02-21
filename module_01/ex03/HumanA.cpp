/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:27:01 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 18:27:55 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weaponREF) : name(name), weapon(weaponREF)
{
    // std::cout << "[System : HumanA <basic type> was created.]" << std::endl;
}

HumanA::~HumanA()
{
    // std::cout << "[System : HumanA <" << this->name << "> has been distroyed.]" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << "." << std::endl;
}