/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:28:56 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 10:21:51 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain() : last_index(0)
{
    std::cout << "🧠 Brain was generated with Default Constructor." << std::endl;
}

Brain::Brain(const Brain &n) : last_index(0)
{
    int limit = n.get_last_index();
    for (int i = 0; i < limit; i++)
    {
        this->set_idea(n.get_idea(i));
    }
    std::cout << "🧠 Brain was generated with Copy Constructor." << std::endl;    
}

Brain::~Brain()
{
    std::cout << "🧠 Brain was removed with Destructor." << std::endl;    
   
}

Brain& Brain::operator= (const Brain &n)
{
    std::cout << "limit" << std::endl;
    int limit = n.get_last_index();
    if (this != &n)
    {
        for (int i = 0; i < limit; i++)
        {
            std::cout << i << std::endl;
            this->set_idea(n.get_idea(i));
        }
    }
    std::cout << "🧠 Brain was copied with assignment operator." << std::endl;
    return *this;
}

std::string Brain::get_idea(int idx) const
{
    std::string ret = this->idea[idx];
    return ret;
}

int Brain::get_last_index(void) const
{
    return this->last_index;
}

void Brain::increase_last_index(void)
{
    this->last_index++;
}

void Brain::set_idea(std::string input)
{
    this->idea[this->get_last_index()] = input;
    this->increase_last_index();
}