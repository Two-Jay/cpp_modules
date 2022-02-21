/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:58:34 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 21:09:38 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap()
{
    this->hitpoints_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;
    std::cout << "FragTrap <basic type> generated." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap <" << this->name_ << "> is removed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name_ = name;
    this->hitpoints_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;
    std::cout << "FragTrap <" << this->name_ << "> generated." << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& n)
{
    ClapTrap::operator=(n);
    return *this;
}

FragTrap::FragTrap(const FragTrap& n) : ClapTrap(n)
{
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