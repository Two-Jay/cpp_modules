/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:42:42 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 17:22:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
            : name_(CLAPTRAP_DEFAULT_NAME),
            type_(CLAPTRAP_DEFAULT_TYPE),
            hitPoints_(CLAPTRAP_DEFAULT_HP),
            energyPoints_(CLAPTRAP_DEFAULT_EP),
            attackDamage_(CLAPTRAP_DEFAULT_DAMAGE)
{
    std::cout << this->type_ << "<" << this->name_ << "> generated." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
            : name_(name),
            hitPoints_(CLAPTRAP_DEFAULT_HP),
            energyPoints_(CLAPTRAP_DEFAULT_EP),
            attackDamage_(CLAPTRAP_DEFAULT_DAMAGE)
{
    std::cout << this->type_ << "<" << this->name_ << "> generated." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->type_ << "<" << this->name_ << "> is removed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &n)
{
    if (this != &n)
    {
        this->setName(n.getName());
        this->setHitPoints(n.getHitPoints());
        this->setEnergyPoints(n.getEnergyPoints());
        this->setAttackDamage(n.getAttackDamage());
    }
    std::cout << this->type_ << "<" << this->name_ << "> was copied." << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& n)
{
    this->setName(n.getName());
    this->setHitPoints(n.getHitPoints());
    this->setEnergyPoints(n.getEnergyPoints());
    this->setAttackDamage(n.getAttackDamage());
    std::cout << this->type_ << "<" << this->name_ << "> was assigned." << std::endl;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    if (this->hitPoints_ == 0)
    {
        std::cout << this->type_ << "<" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        std::cout << this->type_ << "<" << this->name_ << "> attack <" << target << ">, causing <" << this->attackDamage_ << "> points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints_ == 0)
    {
        std::cout << this->type_ << "<" << this->name_ << "> was already died...." << std::endl;
    }
    else if (this->hitPoints_ <= amount)
    {
        this->hitPoints_ = 0;
        std::cout << this->type_ << "<" << this->name_ << "> was died after damaged by " << amount << std::endl; 
    }
    else
    {
        this->hitPoints_ -= amount;
        std::cout << this->type_ << "<" << this->name_ << "> take a damage by "<< amount << "!" << std::endl;     
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints_ == 0)
    {
        std::cout << this->type_ << "<" << this->name_ << "> was already died...." << std::endl;
    }
    else
    {
        this->hitPoints_ += amount;
        std::cout << this->type_ << "<" << this->name_ << "> has repaired by "<< amount << "!" << std::endl;
    }
}

///////////////////////////////////////
// * ----- ClapTrap's getter ----- * //
///////////////////////////////////////

std::string ClapTrap::getName() const
{
	return this->name_;
}

std::string ClapTrap::getType() const
{
    return this->type_;
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->hitPoints_;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return this->energyPoints_;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return this->attackDamage_;
}

///////////////////////////////////////
// * ----- ClapTrap's setter ----- * //
///////////////////////////////////////

void ClapTrap::setName(std::string name)
{
    this->name_ = name;
}

void ClapTrap::setType(std::string type)
{
    this->name_ = type;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	this->hitPoints_ = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->energyPoints_ = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attackDamage_ = amount;
}
