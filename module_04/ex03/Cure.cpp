/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:49:52 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 02:25:20 by jekim            ###   ########.fr       */
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
    std::cout << "💊  <" << n.getType() << "> was generated with Copy Constructor." << std::endl;
}

Cure::~Cure()
{
    std::cout << "💊  <Cure> was removed with Destructor." << std::endl;
}

Cure& Cure::operator= (const Cure& n)
{
    std::cout << "💊  <" << n.getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

void Cure::use(ICharacter& target)
{
    std::cout << "💊  <Cure> - heals " << target.getName() << "'s wounds." << std::endl;    
}

Cure* Cure::clone() const
{
    return new Cure(*this);
}
