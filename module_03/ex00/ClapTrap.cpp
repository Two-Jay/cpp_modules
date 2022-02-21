/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:42:42 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 21:19:00 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() : hitpoints_(10), energy_points_(10), attack_damage_(0) {}
ClapTrap::ClapTrap(std::string name)
{
    this->name_ = name;
    this->hitpoints_ = 10;
    this->energy_points_ = 10;
    this->attack_damage_ = 0;
    std::cout << "ClapTrap <" << this->name_ << "> generated." << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap <" << this->name_ << "> is removed." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &n) { *this = n; }

ClapTrap& ClapTrap::operator= (const ClapTrap& n)
{
    this->name_ = n.name_;
    this->hitpoints_ = n.hitpoints_;
    this->energy_points_ = n.energy_points_;
    this->attack_damage_ = n.attack_damage_;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "ClapTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap <" << this->name_ << "> attack <" << target << ">, causing <" << this->attack_damage_ << "> points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "ClapTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else if (this->hitpoints_ <= amount)
    {
        this->hitpoints_ = 0;
        std::cout << "ClapTrap <" << this->name_ << "> was died after damaged by " << amount << std::endl; 
    }
    else
    {
        this->hitpoints_ -= amount;
        std::cout << "ClapTrap <" << this->name_ << "> take a damage by "<< amount << "!" << std::endl;     
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "ClapTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        this->hitpoints_ += amount;
        std::cout << "ClapTrap <" << this->name_ << "> has repaired by "<< amount << "!" << std::endl;
    }
}