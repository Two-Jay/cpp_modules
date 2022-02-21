/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:48 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 19:18:49 by jekim            ###   ########.fr       */
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

Animal::Animal(const Animal)
