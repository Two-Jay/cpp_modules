/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:38:25 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 12:53:41 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << "🐶  <" << this->getType() << "> was generated with Default Constructor." << std::endl;
    this->brain = new Brain();
    this->setType("Dog");
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "🐶  <" << this->getType() << "> was removed with Destructor." << std::endl;    
}

Dog::Dog(const Dog& n)
{
    std::cout << "🐶  <" << this->getType() << "> was generated with Copy Constructor." << std::endl;
    this->setType(n.getType());
    this->brain = new Brain(*n.brain);
}

Dog& Dog::operator= (const Dog& n)
{
    std::cout << "🐶  <" << this->getType() << "> was copied with assignment operator." << std::endl;
    if (this != &n)
    {
        delete this->brain;
        this->brain = new Brain(*n.brain);
        this->setType(n.getType());
    }
    return *this;
}

void Dog::makeSound(void)
{
    std::cout << "🐶  " << this->getType() << " : Bow-wow! Bow-wow!  " << std::endl;
}

std::string Dog::remember_last_idea(void)
{
    return this->brain->get_idea(this->brain->get_last_index() - 1);
}

void Dog::think_idea(std::string idea)
{
    this->brain->set_idea(idea);
}

void Dog::forget_last_idea(void)
{
    this->brain->pull_idea(this->brain->get_last_index() - 1);
    this->brain->decrease_last_index();
}