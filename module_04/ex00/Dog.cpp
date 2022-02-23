/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:38:25 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 11:18:24 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    this->setType("Dog");
    std::cout << "🐶  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

Dog::~Dog()
{
    std::cout << "🐶  <" << this->getType() << "> was removed with Destructor." << std::endl;    
}

Dog::Dog(const Dog& n)
{
    this->setType(n.getType());
    std::cout << "🐶  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
}

Dog& Dog::operator= (const Dog& n)
{
    if (this != &n)
    {
        this->setType(n.getType());
    }
    std::cout << "🐶  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "🐶  " << this->getType() << " : Bow-wow! Bow-wow!  " << std::endl;
}