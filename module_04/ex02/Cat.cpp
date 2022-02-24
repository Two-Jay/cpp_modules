/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:38:25 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 12:51:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << "😸  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
    this->brain = new Brain();
    this->setType("Cat");
    //std::cout << "😸  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "😸  <" << this->getType() << "> was removed with Destructor." << std::endl;    
}

Cat::Cat(const Cat& n)
{
    std::cout << "😸  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
    this->setType(n.getType());
    this->brain = new Brain(*n.brain);
}

Cat& Cat::operator= (const Cat& n)
{
    std::cout << "😸  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    if (this != &n)
    {
        delete this->brain;
        this->brain = new Brain(*n.brain);
        this->setType(n.getType());
    }
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

void Cat::makeSound(void)
{
    std::cout << "😸  " << this->getType() << " : meow, meow...." << std::endl;
}

void Cat::forget_last_idea(void)
{
    this->brain->pull_idea(this->brain->get_last_index() - 1);
    this->brain->decrease_last_index();
}