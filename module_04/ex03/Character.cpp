/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:24:12 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 02:31:36 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character()
{
    std::cout << "🧙  <Character :: Unknown>  was generated with Default Constructor." << std::endl;
    this->name = "Unknown";
    this->size = 0;
    for (int i = 0; i < CHARANTER_INVEN_MAX; i++)
    {
        this->inventory[i] = 0;
    }
}

Character::Character(std::string name)
{
    std::cout << "🧙  <Character :: " << name << "> was generated with Default Constructor." << std::endl;
    this->name = name;
    this->size = 0;
    for (int i = 0; i < CHARANTER_INVEN_MAX; i++)
    {
        this->inventory[i] = 0;
    }
}

Character::Character(const Character& n)
{
    std::cout << "🧙  <Character :: " << n.getName() << "> was copied with Copy Constructor." << std::endl;
    this->name = n.getName();
    this->size = 0;
    for (int i = 0; i < CHARANTER_INVEN_MAX; i++)
    {
        if (n.inventory[i])
        {
            this->inventory[i] = n.inventory[i]->clone();
            this->size++;
        }
        else
        {
            this->inventory[i] = 0;            
        }
    }    
}

Character::~Character()
{
    std::cout << "🧙  <Character :: " << this->getName() << "> was removed with Destructor." << std::endl;
    this->name = "";
    this->size = 0;
    for (int i = 0; i < CHARANTER_INVEN_MAX; i++)
    {
        delete this->inventory[i];
    }  
}

Character& Character::operator= (const Character& n)
{
    std::cout << "🧙  <Character :: " << n.getName() << "> was copied with assignment operator." << std::endl;
    if (this != &n)
    {
        this->name = n.getName();
        this->size = 0;
        for (int i = 0; i < CHARANTER_INVEN_MAX; i++)
        {
            if (n.inventory[i])
            {
                this->inventory[i] = n.inventory[i]->clone();
                this->size++;
            }
            else
            {
                this->inventory[i] = 0;            
            }
        }    
    }
    return *this;
}

void Character::equip(AMateria *n)
{
    if (!n)
    {
        std::cout << "🧙  <Character :: " << this->getName() << "> : there is nothing to equip!" << std::endl;        
    }
    if (size == CHARANTER_INVEN_MAX)
    {
        std::cout << "🧙  <Character :: " << this->getName() << "> : the inventory is already full." << std::endl;
    }
    else
    {
        std::cout << "🧙  <Character :: " << this->getName() << "> : I equipped this <" << n->getType() <<">." << std::endl;
        this->inventory[size] = n;
        this->size++;
    }
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= CHARANTER_INVEN_MAX)
    {
        std::cout << "🧙  <Character :: " << this->getName() << "> : there is no slot at this index." << std::endl;
        return ;
    }

    AMateria* ptr = this->get_indexed_inventory(idx);
    if (ptr == 0)
    {
        std::cout << "🧙  <Character :: " << this->getName() << "> : there is nothing to unequip." << std::endl;
        return ;     
    }
    std::cout << "🧙  <Character :: " << this->getName() << "> : I unquip... this ! <" << ptr->getType() <<">." << std::endl;
    ptr = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= CHARANTER_INVEN_MAX)
    {
        std::cout << "🧙  <Character :: " << this->getName() << "> : there is no slot at this index." << std::endl;
        return ;
    }
    AMateria* ptr = this->get_indexed_inventory(idx);
    if (ptr == 0)
    {
        std::cout << "🧙  <Character :: " << this->getName() << "> : there is nothing to use." << std::endl;
        return ;
    }
    std::cout << "🧙  <Character :: " << this->getName() << "> : I use... this ! <" << ptr->getType() <<">." << std::endl;
    ptr->use(target);
}


void Character::setName(std::string& name)
{
    this->name = name;
}

std::string const & Character::getName() const
{
    return this->name;
}

AMateria* Character::get_indexed_inventory(int idx)
{
    return this->inventory[idx];
}