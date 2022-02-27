/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:58:34 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 18:58:16 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
    setName(FRAGTRAP_DEFAULT_NAME);
    setType(FRAGTRAP_DEFAULT_TYPE);
    setHitPoints(FRAGTRAP_DEFAULT_HP);
    setEnergyPoints(FRAGTRAP_DEFAULT_EP);
    setAttackDamage(FRAGTRAP_DEFAULT_DAMAGE);
    type_tagged_logger(std::cout, "was generated.");
};

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
    setName(name);
    setType(FRAGTRAP_DEFAULT_TYPE);
    setHitPoints(FRAGTRAP_DEFAULT_HP);
    setEnergyPoints(FRAGTRAP_DEFAULT_EP);
    setAttackDamage(FRAGTRAP_DEFAULT_DAMAGE);
    type_tagged_logger(std::cout, "was generated.");
}

FragTrap::FragTrap(const FragTrap& n) : ClapTrap::ClapTrap(n)
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

FragTrap::~FragTrap()
{
    type_tagged_logger(std::cout, "is removed.");
    this->_type = CLAPTRAP_DEFAULT_TYPE;
};

FragTrap& FragTrap::operator= (const FragTrap& n)
{
    setName(n.getName());
    setType(n.getType());
    setHitPoints(n.getHitPoints());
    setEnergyPoints(n.getEnergyPoints());
    setAttackDamage(n.getAttackDamage());
    type_tagged_logger(std::cout, "was assigned.");
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    if (getHitPoints() == 0)
    {
        type_tagged_logger(std::cout, "was already died....");
    }
    else
    {
        type_tagged_logger(std::cout, "> asks you : \"Gimme five!!\" **Clap Clap** ");
    }
}