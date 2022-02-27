/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:03:12 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 20:20:30 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

// Also, You can create an instance of ScavTrap without calling of ClapTrap("str")
// If so, the compiler will calls ClapTrap's default constructor without parameter Implicitly.
// But, something Implicit would be cause a problem. :)
ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
    setName(SCAVTRAP_DEFAULT_NAME);
    setType(SCAVTRAP_DEFAULT_TYPE);
    setHitPoints(SCAVTRAP_DEFAULT_HP);
    setEnergyPoints(SCAVTRAP_DEFAULT_EP);
    setAttackDamage(SCAVTRAP_DEFAULT_DAMAGE);
    type_tagged_logger(std::cout, "was generated.");
};

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    setName(name);
    setType(SCAVTRAP_DEFAULT_TYPE);
    setHitPoints(SCAVTRAP_DEFAULT_HP);
    setEnergyPoints(SCAVTRAP_DEFAULT_EP);
    setAttackDamage(SCAVTRAP_DEFAULT_DAMAGE);
    type_tagged_logger(std::cout, "was generated.");
}

ScavTrap::ScavTrap(const ScavTrap& n) : ClapTrap::ClapTrap(n)
{
    if (this != &n)
    {
        setName(n.getName());
        setType(n.getType());
        setHitPoints(n.getHitPoints());
        setEnergyPoints(n.getEnergyPoints());
        setAttackDamage(n.getAttackDamage());
    }
    type_tagged_logger(std::cout, "was copied.");
}

ScavTrap::~ScavTrap()
{
    type_tagged_logger(std::cout, "is removed.");
    this->_type = FRAGTRAP_DEFAULT_TYPE;
};

ScavTrap& ScavTrap::operator= (const ScavTrap& n)
{
    setName(n.getName());
    setType(n.getType());
    setHitPoints(n.getHitPoints());
    setEnergyPoints(n.getEnergyPoints());
    setAttackDamage(n.getAttackDamage());
    type_tagged_logger(std::cout, "was assigned.");
    return *this;
}

void ScavTrap::guardGate()
{
    if (getHitPoints() == 0)
    {
        type_tagged_logger(std::cout, "was already died....");
    }
    else
    {
        type_tagged_logger(std::cout, "holds a vigil beside the gate.");
    }
}