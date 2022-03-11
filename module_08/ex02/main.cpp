/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 16:57:23 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << "current top : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::const_iterator cit = mstack.begin();
    MutantStack<int>::const_reverse_iterator cite = mstack.rbegin();

    std::cout << "const iterator test" << std::endl;
    std::cout << *cit++ << std::endl;
    std::cout << *cit++ << std::endl;
    std::cout << *cit-- << std::endl;
    std::cout << *cit-- << std::endl;
    std::cout << *cit << std::endl;


    std::cout << "const reverse iterator test" << std::endl;
    std::cout << *cite++ << std::endl;
    std::cout << *cite++ << std::endl;
    std::cout << *cite-- << std::endl;
    std::cout << *cite-- << std::endl;
    std::cout << *cite << std::endl;

    
    ++it;
    --it;
    std::cout << "iterator test" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}