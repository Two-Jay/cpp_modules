/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:52:47 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 12:52:40 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
#include <iomanip>

# define HEAD_WIDTH 80
# define TEST_MAX_SIZE 8

int main(void)
{
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Cats Party!! >==" << std::endl << std::endl << std::setfill(' ');
        Cat* cptr = new Cat();
        
        cptr->think_idea("I'm hungry...");
        std::cout << cptr->getType() << " : " << cptr->remember_last_idea() << std::endl;
        cptr->think_idea("Let's get some chicken!");
        std::cout << cptr->getType() << " : " << cptr->remember_last_idea() << std::endl;
        cptr->think_idea("Yammi!!!!!!!!!!!!!!");
        std::cout << cptr->getType() << " : " << cptr->remember_last_idea() << std::endl;

        Cat another_cat = *cptr;
        std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        another_cat.forget_last_idea();
        std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        another_cat.forget_last_idea();
        std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        another_cat.think_idea("Let's get some chicken!");
        std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        another_cat.forget_last_idea();
        std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;

        Cat another_cat2(*cptr);
        std::cout << another_cat2.getType() << " : " << another_cat2.remember_last_idea() << std::endl;
        another_cat2.think_idea("I'wll be the king of fishhunters");
        std::cout << another_cat2.getType() << " : " << another_cat2.remember_last_idea() << std::endl;

        delete cptr;
        system("leaks AnimalPartyWithBrain > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< \"Let's play with your dog\"!! >==" << std::endl << std::endl << std::setfill(' ');
        std::string input;

        Dog walwal;

        while (true)
        {
            std::cout << "What would you like to do with your dog ? (sound, think, forget, remember, free): ";
            getline(std::cin, input);
            if (input == "sound" || input == "SOUND")
            {
                walwal.makeSound();
            }
            if (input == "think" || input == "THINK")
            {
                std::cout << "Um... what you think now ? ... : ";
                getline(std::cin, input);
                walwal.think_idea(input);
            }
            if (input == "forget" || input == "FORGET")
            {
                walwal.forget_last_idea();
            }
            if (input == "remember" || input == "REMEMBER")
            {
                std::cout << "🐶  <" << walwal.getType() << "> : " << walwal.remember_last_idea() << std::endl;
            }
            if (input == "free" || input == "FREEs")
            {
                break ;
            }
        }
    }
    system("leaks AnimalPartyWithBrain > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}
