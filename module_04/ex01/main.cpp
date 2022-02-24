/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:52:47 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 11:52:05 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <iomanip>

# define HEAD_WIDTH 80
# define TEST_MAX_SIZE 8

void ordinalNumber_logger(int i, std::string msg)
{
    if (i == 1)
    {
        std::cout << i << "st" << msg;           
    }
    else if (i == 2)
    {
        std::cout << i << "nd" << msg;               
    }
    else
    {
        std::cout << i << "th" << msg;                  
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
        // std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Brain Test >==" << std::endl << std::endl << std::setfill(' ');
        
        // Brain *bptr = new Brain();
        // std::string input;
        // int i = -1;

        // while (++i < 100)
        // {
        //     std::cout << "what is your idea...? : ";
        //     getline(std::cin, input);
        //     if (input == "exit")
        //         break ;
        //     bptr->set_idea(input);
        // }
        
        // Brain another_bptr(*bptr);
        // Brain assigned_bptr = another_bptr;
        
        // for (int i = 0; i < bptr->get_last_index(); i++)
        // {
        //     std::cout << "[this is ";
        //     ordinalNumber_logger(i, " idea... : ");
        //     std::cout << bptr->get_idea(i); 
        //     std::cout << "]" << std::endl;
        // }
        // delete bptr;
        // std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "another brain....." << std::endl << std::endl << std::setfill(' ');
        // for (int i = 0; i < another_bptr.get_last_index(); i++)
        // {
        //     std::cout << "[this is ";
        //     ordinalNumber_logger(i, " idea... : ");
        //     std::cout << another_bptr.get_idea(i); 
        //     std::cout << "]" << std::endl;
        // }
        // std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "assigned brain....." << std::endl << std::endl << std::setfill(' ');
        // for (int i = 0; i < assigned_bptr.get_last_index(); i++)
        // {
        //     std::cout << "[this is ";
        //     ordinalNumber_logger(i, " idea... : ");
        //     std::cout << assigned_bptr.get_idea(i); 
        //     std::cout << "]" << std::endl;
        // }
    }
    {
        // // PASS
        // std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Lined Animal Party!! >==" << std::endl << std::endl << std::setfill(' ');
        // const Animal* meta[TEST_MAX_SIZE];
        
        // for(int i = 0; i < TEST_MAX_SIZE; i++)
        // {
        //     if (i % 2 == 1)
        //         meta[i] = new Cat();
        //     else
        //         meta[i] = new Dog();
        // }
        // for(int i = 0; i < TEST_MAX_SIZE; i++)
        // {
        //     std::cout << "[this is ";
        //     ordinalNumber_logger(i, " Animal.. ");
        //     std::cout << "]" << std::endl; 
        //     whoAreYou(meta[i]);
        // }
        // for(int i = 0; i < TEST_MAX_SIZE; i++)
        // {
        //     delete meta[i];
        // }
    }
    {
        // std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Cats Party!! >==" << std::endl << std::endl << std::setfill(' ');
        // Cat* cptr = new Cat();
        
        // cptr->think_idea("I'm hungry...");
        // std::cout << cptr->getType() << " : " << cptr->remember_last_idea() << std::endl;
        // cptr->think_idea("Let's get some chicken!");
        // std::cout << cptr->getType() << " : " << cptr->remember_last_idea() << std::endl;
        // cptr->think_idea("Yammi!!!!!!!!!!!!!!");
        // std::cout << cptr->getType() << " : " << cptr->remember_last_idea() << std::endl;

        // Cat another_cat = *cptr;
        // std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        // another_cat.forget_last_idea();
        // std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        // another_cat.forget_last_idea();
        // std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        // another_cat.think_idea("Let's get some chicken!");
        // std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;
        // another_cat.forget_last_idea();
        // std::cout << another_cat.getType() << " : " << another_cat.remember_last_idea() << std::endl;

        // Cat another_cat2(*cptr);
        // std::cout << another_cat2.getType() << " : " << another_cat2.remember_last_idea() << std::endl;
        // another_cat2.think_idea("I'wll be the king of fishhunters");
        // std::cout << another_cat2.getType() << " : " << another_cat2.remember_last_idea() << std::endl;

        // delete cptr;
    }
    {
        std::string input;

        Dog walwal;

        while (true)
        {
            std::cout << "What would you like to do with your dog ? : ";
            getline(std::cout, input);
            if ()
        }
    }
    system("leaks AnimalPartyWithBrain > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}
