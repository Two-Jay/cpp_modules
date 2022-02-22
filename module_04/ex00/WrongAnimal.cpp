/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:48 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 17:55:48 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "🐾  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "🐾  <" << this->getType() << "> was removed with Destructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& n)
{
    this->type = n.type;
    std::cout << "🐾  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& n)
{
    if (this != &n)
    {
        this->setType(n.type);
    }
    std::cout << "🐾  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "🐾 " << this->getType() << " : hullabaloo..., hullabaloo...." << std::endl;
}

void WrongAnimal::setType(std::string input)
{
    this->type = input;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}