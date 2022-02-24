/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:02:27 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 02:24:23 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include <string>

Ice::Ice() : AMateria("ice")
{
    std::cout << "🧊  <Ice> was generated with Default Constructor." << std::endl;    
}

Ice::Ice(const Ice& n) : AMateria(n.getType())
{
    std::cout << "🧊  <" << n.getType() << "> was generated with Copy Constructor." << std::endl;
}

Ice::~Ice()
{
    std::cout << "🧊  <Ice> was removed with Destructor." << std::endl;
}

Ice& Ice::operator= (const Ice& n)
{
    std::cout << "🧊  <" << n.getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "🧊  <Ice> : shoots an ice bolt at " << target.getName() << "." << std::endl;    
}

Ice* Ice::clone() const
{
    return new Ice(*this);
}