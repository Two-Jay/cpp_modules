/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:52:47 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 18:33:30 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <iomanip>

# define HEAD_WIDTH 80

int main(void)
{
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< normal Animal Party!! >==" << std::endl << std::endl << std::setfill(' ');
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        j->makeSound(); //will output the cat sound!
        i->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< abnormal Animal Party!! >==" << std::endl << std::endl << std::setfill(' ');
        const WrongAnimal* x = new WrongAnimal();
        const WrongAnimal* z = new WrongCat();

        std::cout << x->getType() << " " << std::endl;
        std::cout << z->getType() << " " << std::endl;
        x->makeSound(); //will not output the cat sound!
        z->makeSound();
        delete x;
        delete z;
    }
    system("leaks AnimalParty > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}