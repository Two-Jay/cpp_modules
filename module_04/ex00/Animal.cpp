/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:48 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 21:37:18 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal() : type("Animal")
{
    std::cout << "🐾 Animal <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "🐾 Animal <" << this->getType() << "> was generated with 'type' parameter." << std::endl;
}

Animal::~Animal()
{
    std::cout << "🐾 Animal <" << this->getType() << "> was removed with Destructor." << std::endl;
}

Animal::Animal(const Animal& n)
{
    this->type = n.type;
}

Animal& Animal::operator= (const Animal& n)
{
    if (this != &n)
    {
        this->setType(n.type);
    }
    return *this;
}

void Animal::makeSound(void)
{
    std::cout << "🐾" << this->getType() << " : hullabaloo..., hullabaloo...." << std::endl;
}

void Animal::setType(std::string input)
{
    this->type = input;
}

std::string Animal::getType(void)
{
    return this->type;
}