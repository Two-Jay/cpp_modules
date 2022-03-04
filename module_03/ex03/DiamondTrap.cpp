/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:46:55 by jekim             #+#    #+#             */
/*   Updated: 2022/03/02 23:25:27 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap()
    :  FragTrap(), ScavTrap()
{
    setName(DIAMONDTRAP_DEFAULT_NAME);
    setType(DIAMONDTRAP_DEFAULT_TYPE);
    setHitPoints(FRAGTRAP_DEFAULT_HP);
    setEnergyPoints(SCAVTRAP_DEFAULT_EP);
    setAttackDamage(FRAGTRAP_DEFAULT_DAMAGE);
    type_tagged_logger(std::cout, "was generated.");
};

DiamondTrap::DiamondTrap(std::string name)
    :  FragTrap(), ScavTrap()
{
    setName(name);
    ClapTrap::setName(name + CLAPTRAP_DEFAULT_SUFFIX);
    setType(DIAMONDTRAP_DEFAULT_TYPE);
    setHitPoints(FRAGTRAP_DEFAULT_HP);
    setEnergyPoints(SCAVTRAP_DEFAULT_EP);
    setAttackDamage(FRAGTRAP_DEFAULT_DAMAGE);
    type_tagged_logger(std::cout, "was generated.");
}

DiamondTrap::DiamondTrap(const DiamondTrap& n)
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

DiamondTrap::~DiamondTrap()
{
    type_tagged_logger(std::cout, "is removed.");
    this->_type = SCAVTRAP_DEFAULT_TYPE;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& n)
{
    if (this != &n)
    {
        setName(n.getName());
        setType(n.getType());
        setHitPoints(n.getHitPoints());
        setEnergyPoints(n.getEnergyPoints());
        setAttackDamage(n.getAttackDamage());
    }
    type_tagged_logger(std::cout, "was assigned.");
    return *this;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap : I'm " << this->getName() << " and my ancestor is " << ClapTrap::getName() << std::endl;
}

std::string DiamondTrap::getName() const
{
    return DiamondTrap::_name;
}

void DiamondTrap::setName(std::string name)
{
    _name = name;
}

void DiamondTrap::type_tagged_logger(std::ostream& os, std::string msg)
{
    os << DiamondTrap::_type << " named <" << DiamondTrap::_name << "> " << msg << std::endl;
}

void DiamondTrap::type_tagged_logger_nonendl(std::ostream& os, std::string msg)
{
    os << DiamondTrap::_type << " named <" << DiamondTrap::_name << "> " << msg;
}