/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:26:16 by jekim             #+#    #+#             */
/*   Updated: 2022/02/28 01:47:10 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {};

static int get_random_number(void) {
    static int flag;
    if (flag == 0)
    {
        srand(time(NULL));
        flag++;        
    }
    return rand();
};

Base *generate(void) {
    int dice = get_random_number() % 3;
    switch (dice)
    {
    case 0:
        return new A();
        break ;
    case 1:
        return new B();
        break ;
    case 2:
        return new C();
        break ;
    default:
        return NULL;
        break;
    }
};

void identify(Base* ptr) {
    if (dynamic_cast<A *>(ptr))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(ptr))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(ptr))
        std::cout << "C" << std::endl;
}

bool check_A(Base& ref) {
    try {
        const A& cref = dynamic_cast<const A&>(ref);
        (void)cref;
        std::cout << "A" << std::endl;      
        return true;  
    } catch (std::exception &e) {
        ;
    }
    return false;
}

bool check_B(Base& ref) {
    try {
        const B& cref = dynamic_cast<const B&>(ref);
        (void)cref;
        std::cout << "B" << std::endl;
        return true;    
    } catch (std::exception &e) {
        ;
    }
    return false;
}

bool check_C(Base& ref) {
    try {
        const C& cref = dynamic_cast<const C&>(ref);
        (void)cref;
        std::cout << "C" << std::endl;
        return true;        
    } catch (std::exception &e) {
        ;
    }
    return false;
}

void identify(Base& ref) {
    check_A(ref);
    check_B(ref);
    check_C(ref);
}