/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:03:12 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 20:41:05 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitpoints_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
    std::cout << "ScavTrap <basic type> generated." << std::endl;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap <" << this->name_ << "> is removed." << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name_ = name;
    this->hitpoints_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
    std::cout << "ScavTrap <" << this->name_ << "> generated." << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& n)
{
    ClapTrap::operator=(n);
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& n) : ClapTrap(n)
{
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