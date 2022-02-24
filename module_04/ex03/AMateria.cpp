/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:00:34 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 17:29:11 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
    std::cout << "📦  <AMateria> was generated with Default Constructor." << std::endl;
}

AMateria::AMateria(const std::string &type)
{
    std::cout << "📦  <AMateria> was generated with Default Constructor." << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria& n) : type(n.getType())
{
    std::cout << "📦  <AMateria> was generated with Copy Constructor." << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "📦  <AMateria> was removed with Destructor." << std::endl;
}

void AMateria::setType(std::string const &type)
{
    this->type = type;
}

const std::string& AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "📦  <AMateria> was used for " << target.getName() << ", : \"what is it?\" "<< std::endl;    
}

AMateria& AMateria::operator= (const AMateria& n)
{
    std::cout << "📦  <AMateria> was copied with assignment operator." << std::endl;
    if (this != &n)
    {
        this->getType();
    }
    return *this;
}