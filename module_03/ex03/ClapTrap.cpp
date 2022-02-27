/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:42:42 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 19:35:42 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
            : _name(CLAPTRAP_DEFAULT_NAME),
            _type(CLAPTRAP_DEFAULT_TYPE),
            _hitPoints(CLAPTRAP_DEFAULT_HP),
            _energyPoints(CLAPTRAP_DEFAULT_EP),
            _attackDamage(CLAPTRAP_DEFAULT_DAMAGE)
{
    type_tagged_logger(std::cout, "was generated.");
}

ClapTrap::ClapTrap(std::string name)
            : _name(name),
            _type(CLAPTRAP_DEFAULT_TYPE),
            _hitPoints(CLAPTRAP_DEFAULT_HP),
            _energyPoints(CLAPTRAP_DEFAULT_EP),
            _attackDamage(CLAPTRAP_DEFAULT_DAMAGE)
{
    type_tagged_logger(std::cout, "was generated.");
}

ClapTrap::~ClapTrap()
{
    type_tagged_logger(std::cout, "is removed.");
}

ClapTrap::ClapTrap(const ClapTrap &n)
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

ClapTrap& ClapTrap::operator= (const ClapTrap& n)
{
    setName(n.getName());
    setType(n.getType());
    setHitPoints(n.getHitPoints());
    setEnergyPoints(n.getEnergyPoints());
    setAttackDamage(n.getAttackDamage());
    type_tagged_logger(std::cout, "was assigned.");
    return *this;
}

/////////////////////////////////////////////////
// * ----- ClapTrap's member functions ----- * //
/////////////////////////////////////////////////

void ClapTrap::attack(std::string const &target)
{
    if (_hitPoints == 0)
    {
        type_tagged_logger(std::cout, "was already died....");
    }
    else
    {
        type_tagged_logger_nonendl(std::cout, "");
        std::cout << "attack <" << target << ">, causing <" << _attackDamage << "> points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        type_tagged_logger(std::cout, "was already died....");
    }
    else if (_hitPoints <= amount)
    {
        _hitPoints = 0;
        type_tagged_logger_nonendl(std::cout, "");
        std::cout << "was died after damaged by " << amount << std::endl; 
    }
    else
    {
        _hitPoints -= amount;
        type_tagged_logger_nonendl(std::cout, "");
        std::cout << "take a damage by "<< amount << "!" << std::endl;     
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        type_tagged_logger(std::cout, "was already died....");
    }
    else
    {
        _hitPoints += amount;
        type_tagged_logger_nonendl(std::cout, "");
        std::cout << "has repaired by "<< amount << "! (current HP is " << getHitPoints() << ")" << std::endl;
    }
}

void ClapTrap::type_tagged_logger(std::ostream& os, std::string msg)
{
    os << _type << " named <" << _name << "> " << msg << std::endl;
}

void ClapTrap::type_tagged_logger_nonendl(std::ostream& os, std::string msg)
{
    os << _type << " named <" << _name << "> " << msg;
}

///////////////////////////////////////
// * ----- ClapTrap's getter ----- * //
///////////////////////////////////////

std::string ClapTrap::getName() const
{
	return _name;
}

std::string ClapTrap::getType() const
{
    return _type;
}

unsigned int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}

///////////////////////////////////////
// * ----- ClapTrap's setter ----- * //
///////////////////////////////////////

void ClapTrap::setName(std::string name)
{
    _name = name;
}

void ClapTrap::setType(std::string type)
{
    _type = type;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	_energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}
