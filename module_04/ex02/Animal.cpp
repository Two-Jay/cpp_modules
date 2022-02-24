/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:48 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 14:59:13 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal() : type("Animal")
{
    std::cout << "🐾  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

Animal::~Animal()
{
    std::cout << "🐾  <" << this->getType() << "> was removed with Destructor." << std::endl;
}

Animal::Animal(const Animal& n)
{
    this->type = n.type;
    std::cout << "🐾  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
}

Animal& Animal::operator= (const Animal& n)
{
    if (this != &n)
    {
        this->setType(n.type);
    }
    std::cout << "🐾  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

void Animal::setType(std::string input)
{
    this->type = input;
}

std::string Animal::getType(void) const
{
    return this->type;
}