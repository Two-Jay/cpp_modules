/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:00:20 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 18:05:28 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    this->setType("WrongCat");
    std::cout << "😸  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "😸  <" << this->getType() << "> was removed with Destructor." << std::endl;    
}

WrongCat::WrongCat(const WrongCat& n)
{
    this->setType(n.getType());
    std::cout << "😸  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& n)
{
    if (this != &n)
    {
        this->setType(n.getType());
    }
    std::cout << "😸  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "😸  " << this->getType() << " : meow, meow...." << std::endl;
}