/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:42:42 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 12:24:19 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() : name_("basic_clap_type"), hitpoints_(10), energy_points_(10), attack_damage_(0)
{
    std::cout << "ClapTrap <" << this->name_ << "> generated." << std::endl;
}

ClapTrap::ClapTrap(std::string name)  : name_(name), hitpoints_(10), energy_points_(10), attack_damage_(0)
{
    std::cout << "ClapTrap <" << this->name_ << "> generated." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap <" << this->name_ << "> is removed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &n)
{
    if (this != &n)
    {
        this->set_name(n.get_name());
        this->set_hitpoints(n.get_hitpoints());
        this->set_energy_points(n.get_energy_points());
        this->set_attack_damage(n.get_attack_damage());
    }
    std::cout << "ClapTrap <" << this->name_ << "> was copied." << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& n)
{
    this->set_name(n.get_name());
    this->set_hitpoints(n.get_hitpoints());
    this->set_energy_points(n.get_energy_points());
    this->set_attack_damage(n.get_attack_damage());
    std::cout << "ClapTrap <" << this->name_ << "> was assigned." << std::endl;
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

std::string ClapTrap::get_name() const
{
	return this->name_;
}

unsigned int ClapTrap::get_hitpoints() const
{
	return this->hitpoints_;
}

unsigned int ClapTrap::get_energy_points() const
{
	return this->energy_points_;
}

unsigned int ClapTrap::get_attack_damage() const
{
	return this->attack_damage_;
}

void ClapTrap::set_name(std::string name)
{
    this->name_ = name;
}

void ClapTrap::set_hitpoints(unsigned int amount)
{
	this->hitpoints_ = amount;
}

void ClapTrap::set_energy_points(unsigned int amount)
{
	this->energy_points_ = amount;
}

void ClapTrap::set_attack_damage(unsigned int amount)
{
	this->attack_damage_ = amount;
}
