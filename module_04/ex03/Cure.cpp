/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:49:52 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 17:42:02 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

Cure::Cure() : AMateria("cure")
{
    std::cout << "💊  <Cure> was generated with Default Constructor." << std::endl;    
}

Cure::Cure(const Cure& n) : AMateria(n.getType())
{
    std::cout << "💊  <Cure> was generated with Copy Constructor." << std::endl;
}

Cure::~Cure()
{
    std::cout << "💊  <Cure> was removed with Destructor." << std::endl;
}

Cure& Cure::operator= (const Cure& n)
{
    this->setType(n.getType());
    std::cout << "💊  <Cure> was copied with assignment operator." << std::endl;  
}

void Cure::use(ICharacter& target)
{
    std::cout << "💊  <Cure> heals " << target.getName() << "'s wounds." << std::endl;    
}

AMateria* Cure::clone()
{
    return new Cure();
}



