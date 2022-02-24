/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:39:09 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 09:48:12 by jekim            ###   ########.fr       */
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

const std::string& AMateria::getType() const
{
    return this->type;
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

    // std::cout << "📦  <AMateria> was generated with Default Constructor." << std::endl;
    // std::cout << "📦  <AMateria> was removed with Destructor." << std::endl;
    // std::cout << "📦  <AMateria> was generated with Copy Constructor." << std::endl;
    // std::cout << "📦  <AMateria> was copied with assignment operator." << std::endl;