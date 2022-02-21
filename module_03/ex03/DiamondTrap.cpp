/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:46:55 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 11:31:33 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->set_name("basic");
    this->set_hitpoints(FragTrap::get_hitpoints());
    this->set_attack_damage(FragTrap::get_attack_damage());
    this->set_energy_points(ScavTrap::get_energy_points());
    std::cout << "DiamondTrap <" << this->get_name() << "> generated." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_frag_name"), ScavTrap(name + "_scav_name")
{
    this->set_name(name);
    this->set_hitpoints(FragTrap::get_hitpoints());
    this->set_attack_damage(FragTrap::get_attack_damage());
    this->set_energy_points(ScavTrap::get_energy_points());
    std::cout << "DiamondTrap <" << this->get_name() << "> generated." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& n)
{
    this->set_name(n.get_name());
    this->set_hitpoints(n.get_hitpoints());
    this->set_attack_damage(n.get_attack_damage());
    this->set_energy_points(n.get_energy_points());
    std::cout << "DiamondTrap <" << this->get_name() << "> was copied." << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& n)
{
    this->set_name(n.get_name());
    this->set_hitpoints(n.get_hitpoints());
    this->set_attack_damage(n.get_attack_damage());
    this->set_energy_points(n.get_energy_points());
    std::cout << "DiamondTrap <" << this->get_name() << "> was assigned." << std::endl;    
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap <" << this->get_name() << "> is removed." << std::endl;    
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap : I'm " << DiamondTrap::get_name() << " and my ancestor is " << ClapTrap::get_name() << std::endl;    
}


// 다형성 원칙 위배
// ClapTrap 의 멤버를 그대로 쓰면서 변수 접근을 격리시키는 방법은 없나?

// std::string DiamondTrap::get_name(void) const
// {
//     return this->name;
// }

// void DiamondTrap::set_name(std::string name)
// {
//     this->name = name;
// }