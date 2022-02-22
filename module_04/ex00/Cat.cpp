/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:38:25 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 17:43:38 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    this->setType("Cat");
    std::cout << "😸  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

Cat::~Cat()
{
    std::cout << "😸  <" << this->getType() << "> was removed with Destructor." << std::endl;    
}

Cat::Cat(const Cat& n)
{
    this->setType(n.getType());
    std::cout << "😸  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
}

Cat& Cat::operator= (const Cat& n)
{
    if (this != &n)
    {
        this->setType(n.getType());
    }
    std::cout << "😸  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "😸  " << this->getType() << " : meow, meow...." << std::endl;
}