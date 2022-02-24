/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:02:27 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 15:21:11 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include <string>

Ice::Ice()
{
    std::cout << "🧊  <Ice> was generated with Default Constructor." << std::endl;    
}

Ice::Ice(const Ice& n)
{
    std::cout << "🧊  <Ice> was generated with Copy Constructor." << std::endl;
}

Ice::~Ice()
{
    std::cout << "🧊  <Ice> was removed with Destructor." << std::endl;
}

Ice& Ice::operator= (const Ice& n)
{
    std::cout << "🧊  <Ice> was copied with assignment operator." << std::endl;    
}