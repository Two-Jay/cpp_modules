/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:12:35 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 13:19:02 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    
    // delete bob;
    // delete me;
    delete src;
    return 0;
}