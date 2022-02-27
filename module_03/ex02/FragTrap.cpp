/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:58:34 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 12:37:22 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap("basic_clap_name")
{
    this->set_name("basic_frag_type");
    this->set_hitpoints(100);
    this->set_energy_points(100);
    this->set_attack_damage(30);
    std::cout << "FragTrap <" << this->name_ << "> generated." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap <" << this->name_ << "> is removed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->set_name(name);
    this->set_hitpoints(100);
    this->set_energy_points(100);
    this->set_attack_damage(30);
    std::cout << "FragTrap <" << this->name_ << "> generated." << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& n)
{
    this->set_name(n.get_name());
    this->set_hitpoints(n.get_hitpoints());
    this->set_energy_points(n.get_energy_points());
    this->set_attack_damage(n.get_attack_damage());
    std::cout << "FragTrap <" << this->name_ << "> was copied." << std::endl;
    return *this;
}

FragTrap::FragTrap(const FragTrap& n) : ClapTrap(n)
{
    if (this != &n)
    {
        this->set_name(n.get_name());
        this->set_hitpoints(n.get_hitpoints());
        this->set_energy_points(n.get_energy_points());
        this->set_attack_damage(n.get_attack_damage());        
    }
    std::cout << "FragTrap <" << this->name_ << "> was assigned." << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "FragTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        std::cout << "FragTrap <" << this->name_ << "> attack <" << target << ">, causing <" << this->attack_damage_ << "> points of damage!" << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "FragTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else if (this->hitpoints_ <= amount)
    {
        this->hitpoints_ = 0;
        std::cout << "FragTrap <" << this->name_ << "> was died after damaged by " << amount << std::endl; 
    }
    else
    {
        this->hitpoints_ -= amount;
        std::cout << "FragTrap <" << this->name_ << "> take a damage by "<< amount << "! (current HP : " << this->hitpoints_ << ")" << std::endl;     
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "FragTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        this->hitpoints_ += amount;
        std::cout << "FragTrap <" << this->name_ << "> has repaired by "<< amount << "! (current HP : " << this->hitpoints_ << ")" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    if (this->hitpoints_ == 0)
    {
        std::cout << "FragTrap <" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        std::cout << "FragTrap <" << this->name_ << "> asks you : \"Gimme five!!\" **Clap Clap** " << std::endl;
    }
}

std::string FragTrap::get_name(void) const
{
    return this->name_;
}

void FragTrap::set_name(std::string name)
{
    this->name_ = name;
}
