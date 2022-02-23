/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:38:25 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 22:00:13 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    this->brain = new Brain();
    this->setType("Cat");
    std::cout << "😸  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "😸  <" << this->getType() << "> was removed with Destructor." << std::endl;    
}

Cat::Cat(const Cat& n)
{
    this->setType(n.getType());
    delete this->brain;
    this->brain = new Brain(*n.brain);
    std::cout << "😸  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
}

Cat& Cat::operator= (const Cat& n)
{
    if (this != &n)
    {
        delete this->brain;
        this->brain = new Brain(*n.brain);
        this->setType(n.getType());
    }
    std::cout << "😸  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    return *this;
}

std::string Cat::remember_last_idea(void)
{
    return this->brain->get_idea(this->brain->get_last_index() - 1);
}

void Cat::think_idea(std::string idea)
{
    this->brain->set_idea(idea);
}

void Cat::makeSound(void) const
{
    std::cout << "😸  " << this->getType() << " : meow, meow...." << std::endl;
}