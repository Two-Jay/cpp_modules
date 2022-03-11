/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 19:42:56 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include "MutantStack.hpp"

#define HEAD_WIDTH 70

int main()
{
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< MutantStack : basic test >==" << std::endl << std::endl << std::setfill(' ');
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
        std::cout << *cit++ << " " << *cit++ << " " <<  *cit-- << " " << *cit-- << " " << *cit << std::endl;

        std::cout << "const reverse iterator test" << std::endl;
        std::cout << *cite++ << " " << *cite++ << " " <<  *cite-- << " " << *cite-- << " " << *cite << std::endl;

        ++it;
        --it;
        std::cout << "iterator test" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }        
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< MutantStack : iterator test >==" << std::endl << std::endl << std::setfill(' ');
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        std::cout << "size : " << mstack.size() << std::endl;
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        MutantStack<int>::const_iterator cit = mstack.begin();
        MutantStack<int>::const_reverse_iterator cite = mstack.rbegin();

        std::cout << "const iterator test" << std::endl;
        std::cout << *cit++ << " " << *cit++ << " " <<  *cit-- << " " << *cit-- << " " << *cit << std::endl;

        std::cout << "const reverse iterator test" << std::endl;
        std::cout << *cite++ << " " << *cite++ << " " <<  *cite-- << " " << *cite-- << " " << *cite << std::endl;
        
        ++it;
        --it;
        std::cout << "iterator test" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< vector : iterator test >==" << std::endl << std::endl << std::setfill(' ');
        std::vector<int> target1;
        target1.push_back(5);
        target1.push_back(17);
        target1.push_back(3);
        target1.push_back(5);
        target1.push_back(737);
        std::cout << "size : " << target1.size() << std::endl;
        
        std::vector<int>::iterator it = target1.begin();
        std::vector<int>::iterator ite = target1.end();
        std::vector<int>::const_iterator cit = target1.begin();
        std::vector<int>::const_reverse_iterator cite = target1.rbegin();

        std::cout << "const iterator test" << std::endl;
        std::cout << *cit++ << " " << *cit++ << " " <<  *cit-- << " " << *cit-- << " " << *cit << std::endl;

        std::cout << "const reverse iterator test" << std::endl;
        std::cout << *cite++ << " " << *cite++ << " " <<  *cite-- << " " << *cite-- << " " << *cite << std::endl;

        
        ++it;
        --it;
        std::cout << "iterator test" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< list : iterator test >==" << std::endl << std::endl << std::setfill(' ');
        std::list<int> target2;
        target2.push_back(5);
        target2.push_back(17);
        target2.push_back(3);
        target2.push_back(5);
        target2.push_back(737);
        std::list<int>::iterator it = target2.begin();
        std::list<int>::iterator ite = target2.end();
        std::list<int>::const_iterator cit = target2.begin();
        std::list<int>::const_reverse_iterator cite = target2.rbegin();

        std::cout << "const iterator test" << std::endl;
        std::cout << *cit++ << " " << *cit++ << " " <<  *cit-- << " " << *cit-- << " " << *cit << std::endl;

        std::cout << "const reverse iterator test" << std::endl;
        std::cout << *cite++ << " " << *cite++ << " " <<  *cite-- << " " << *cite-- << " " << *cite << std::endl;

        
        ++it;
        --it;
        std::cout << "iterator test" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }        
    }
    return 0;
}