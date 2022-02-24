/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:01:29 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 02:09:40 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>

MateriaSource::MateriaSource()
{
    std::cout << "🧳  <MateriaSource> was generated with Default Constructor." << std::endl;
    this->size = 0;
    for (int i = 0; i < MS_INVEN_MAX; i++)
    {
        this->inventory[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& n)
{
    std::cout << "🧳  <MateriaSource> was generated with Copy Constructor." << std::endl;
    if (this != &n)
    {
        size = 0;
        for (int i = 0; n.inventory[i] && i < MS_INVEN_MAX; i++)
        {
            if (n.inventory[i])
            {
                this->inventory[i] = n.inventory[i]->clone();
                this->size++;
            }
            else
                this->inventory[i] = 0;
        }
    }
}

MateriaSource::~MateriaSource()
{
    std::cout << "🧳  <MateriaSource> was removed with Destructor." << std::endl;
    size = 0;
    for (int i = 0; i < MS_INVEN_MAX; i++)
    {
        delete this->inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* n)
{
    if (this->size == MS_INVEN_MAX)
    {
        std::cout << "🧳  <MateriaSource> : the inventory is full" << std::endl;
    }
    else
    {
        std::cout << "🧳  <MateriaSource> : You finally learned " << n->getType() << "." << std::endl;
        this->inventory[size] = n;
        this->size++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->size; i++)
    {
        if (type == this->inventory[i]->getType())
        {
            std::cout << "🧳  <MateriaSource> : created " << type << "." << std::endl;
            return this->inventory[i]->clone();
        }
    }
    std::cout << "🧳  <MateriaSource> : did'nt learn about " << type << "." << std::endl;
    return 0;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& n)
{
    std::cout << "🧳  <MateriaSource> was copied with assignment operator." << std::endl;
    if (this != &n)
    {
        this->size = 0;
        for (int i = 0; n.inventory[i] && i < MS_INVEN_MAX; i++)
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