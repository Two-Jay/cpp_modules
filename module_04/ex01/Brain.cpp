/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:25:43 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 18:30:11 by jekim            ###   ########.fr       */
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
    this->last_index = 0;
    std::cout << "🧠 Brain was removed with Destructor." << std::endl;  
}

Brain& Brain::operator= (const Brain &n)
{
    if (this != &n)
    {
        this->last_index = 0;
        int limit = n.get_last_index();
        for (int i = 0; i < limit; i++)
        {
            this->set_idea(n.get_idea(i));
        }
    }
    std::cout << "🧠 Brain was copied with assignment operator." << std::endl;
    return *this;
}

int Brain::get_last_index(void) const
{
    return this->last_index;
}

void Brain::increase_last_index(void)
{
    if (this->last_index < 99)
    {
        this->last_index++;
    }
}

void Brain::decrease_last_index(void)
{
    if (this->last_index > 0)
    {
        this->last_index--;        
    }
}

std::string Brain::get_idea(int idx) const
{
    if (this->last_index == 0)
    {
        return "Has no idea... really";
    }
    std::string ret = this->idea[idx];
    return ret;
}

void Brain::set_idea(std::string input)
{
    this->idea[this->get_last_index()] = input;
    this->increase_last_index();
}

void Brain::pull_idea(int idx)
{
    this->idea[idx] = "";
}