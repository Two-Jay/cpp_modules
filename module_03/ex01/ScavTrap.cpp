/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:03:12 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 15:25:50 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap("basic_clap_type")
{
    this->set_name("basic_scav_type");
    this->set_hitpoints(100);
    this->set_energy_points(50);
    this->set_attack_damage(20);
    std::cout << "ScavTrap <" << this->name_ << "> generated." << std::endl;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap <" << this->name_ << "> is removed." << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->set_name(name);
    this->set_hitpoints(100);
    this->set_energy_points(50);
    this->set_attack_damage(20);
    std::cout << "ScavTrap <" << this->name_ << "> generated." << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& n)
{
    // ClapTrap::operator=(n);
    this->set_name(n.get_name());
    this->set_hitpoints(n.get_hitpoints());
    this->set_energy_points(n.get_energy_points());
    this->set_attack_damage(n.get_attack_damage());
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& n) : ClapTrap(n)
{
    this->set_name(n.get_name());
    this->set_hitpoints(n.get_hitpoints());
    this->set_energy_points(n.get_energy_points());
    this->set_attack_damage(n.get_attack_damage());
}

void ScavTrap::attack(std::string const &target)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "ScavTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        std::cout << "ScavTrap <" << this->name_ << "> attack <" << target << ">, causing <" << this->attack_damage_ << "> points of damage!" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "ScavTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else if (this->hitpoints_ <= amount)
    {
        this->hitpoints_ = 0;
        std::cout << "ScavTrap <" << this->name_ << "> was died after damaged by " << amount << std::endl; 
    }
    else
    {
        this->hitpoints_ -= amount;
        std::cout << "ScavTrap <" << this->name_ << "> take a damage by "<< amount << "! (current HP : " << this->hitpoints_ << ")" << std::endl;     
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "ScavTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        this->hitpoints_ += amount;
        std::cout << "ScavTrap <" << this->name_ << "> has repaired by "<< amount << "! (current HP : " << this->hitpoints_ << ")" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "ScavTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        std::cout << "ScavTrap <" << this->name_ << "> holds a vigil beside the gate." << std::endl;
    }
}

std::string ScavTrap::get_name(void) const
{
    return this->name_;
}

void ScavTrap::set_name(std::string name)
{
    this->name_ = name;
}
