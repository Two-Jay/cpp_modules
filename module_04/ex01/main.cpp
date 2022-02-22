/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:52:47 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 19:02:59 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <iomanip>

# define HEAD_WIDTH 80
# define TEST_MAX_SIZE 8

void animal_logger(int i)
{
    if (i == 1)
    {
        std::cout << "[this is " << i << "st Animal]" << std::endl;           
    }
    else if (i == 2)
    {
        std::cout << "[this is " << i << "nd Animal]" << std::endl;               
    }
    else
    {
        std::cout << "[this is " << i << "th Animal]" << std::endl;                  
    }    
}

void whoAreYou(const Animal *p)
{
    p->getType();
    p->makeSound();
}

int main(void)
{
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Brain Test >==" << std::endl << std::endl << std::setfill(' ');
        

    }
    // {
    //     std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Lined Animal Party!! >==" << std::endl << std::endl << std::setfill(' ');
    //     const Animal* meta[TEST_MAX_SIZE];
        
    //     for(int i = 0; i < TEST_MAX_SIZE; i++)
    //     {
    //         if (i % 2 == 1)
    //             meta[i] = new Cat();
    //         else
    //             meta[i] = new Dog();
    //     }
    //     for(int i = 0; i < TEST_MAX_SIZE; i++)
    //     {
    //         animal_logger(i);
    //         whoAreYou(meta[i]);
    //     }
    //     for(int i = 0; i < TEST_MAX_SIZE; i++)
    //     {
    //         delete meta[i];
    //     }
    // }
    system("leaks AnimalPartyWithBrain > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}