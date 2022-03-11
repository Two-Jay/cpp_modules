/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 19:46:29 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Span.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>

#define TEST_SMALL_LIMIT 10
#define TEST_LARGE_LIMIT 10000
#define HEAD_WIDTH 70

void print_sp_and_size(Span& sp)
{
    std::cout << std::endl << std::setw(HEAD_WIDTH - 20) << std::setfill('.') << "" << std::endl << std::endl << std::setfill(' ');
    std::cout << "Max : " << sp.getMax() << " , Size : " << sp.size() << std::endl;
    sp.printNumber();
    std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
    std::cout << "LongestSpan : " << sp.longestSpan() << std::endl;
}

int main()
{
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Span : mandatory test >==" << std::endl << std::endl << std::setfill(' ');
        // seeding for rand();
        srand(time(NULL));

        Span sp(TEST_SMALL_LIMIT);
        for (int i = 0; i < TEST_SMALL_LIMIT; i++)
        {
            sp.addNumber(rand());
        }
        print_sp_and_size(sp);
    }
    {
        srand(time(NULL));

        Span sp(TEST_LARGE_LIMIT);
        for (int i = 0; i < TEST_LARGE_LIMIT; i++)
        {
            sp.addNumber(rand());
        }
        print_sp_and_size(sp);        
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Span : addNumber with iterator :: normal >==" << std::endl << std::endl << std::setfill(' ');
        Span *sp = new Span(TEST_SMALL_LIMIT);
        for (int i = 0; i < TEST_SMALL_LIMIT; i++)
        {
            sp->addNumber(rand());
        }
        Span::iterator it_be = sp->begin();
        Span::iterator it_end = sp->end();
        Span sp1(TEST_SMALL_LIMIT);
        sp1.addNumber(it_be, it_end);
        sp->printNumber();
        print_sp_and_size(sp1);
        delete sp;
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Span : addNumber with iterator :: vector >==" << std::endl << std::endl << std::setfill(' ');
        std::vector<int> vec;
        Span sp(TEST_SMALL_LIMIT);
        for (int i = 0; i < TEST_SMALL_LIMIT; i++)
        {
            vec.push_back(i * 10);
        }
        std::vector<int>::iterator it = vec.begin();
        std::vector<int>::iterator it1 = vec.end();
        sp.addNumber(it, it1);
        print_sp_and_size(sp);
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Span : addNumber with iterator :: exception >==" << std::endl << std::endl << std::setfill(' ');
        Span sp1(TEST_SMALL_LIMIT);
        Span sp(TEST_SMALL_LIMIT);
        try {
            for (int i = 0; i < TEST_SMALL_LIMIT; i++)
            {
                sp.addNumber(rand());
            }
            sp.addNumber(42);
            sp.printNumber();
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        sp.printNumber();
        Span::iterator it_be = sp.begin();
        Span::iterator it_end = sp.end();
        sp1.addNumber(10);
        try {
            sp1.addNumber(it_be, it_end);
            sp1.printNumber();
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        sp1.printNumber();
        try {
            std::cout << sp1.shortestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        try {
            std::cout << sp1.longestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Span : edge cases >==" << std::endl << std::endl << std::setfill(' ');
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< case0 : unordered shortest span >==" << std::endl << std::endl << std::setfill(' ');
        Span sp(TEST_SMALL_LIMIT);
        try {
            sp.addNumber(10);
            sp.addNumber(100);
            sp.addNumber(120);
            sp.addNumber(121);
            sp.addNumber(1000);
            sp.addNumber(105);
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        print_sp_and_size(sp);
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< case1 : duplicated number >==" << std::endl << std::endl << std::setfill(' ');
        Span sp(TEST_SMALL_LIMIT);
        try {
            sp.addNumber(10);
            sp.addNumber(100);
            sp.addNumber(120);
            sp.addNumber(120);
            sp.addNumber(1000);
            sp.addNumber(105);
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        print_sp_and_size(sp);
        Span::iterator it = sp.begin();
        std::cout << *it << std::endl;
        it++;
        std::cout << *it << std::endl;
        it--;
        std::cout << *it << std::endl;
        print_sp_and_size(sp);
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< case2 : addNumber with other container's iterators >==" << std::endl << std::endl << std::setfill(' ');
        std::vector<int> vec;
        Span sp(TEST_SMALL_LIMIT);
        for (int i = 0; i < TEST_SMALL_LIMIT; i++)
        {
            vec.push_back(10);
        }
        try {
            std::vector<int>::iterator it = vec.begin();
            std::vector<int>::iterator ite = vec.end();
            sp.addNumber(it, ite);
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        sp.printNumber();
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< case3 : get Spans with INT_MIN / INT_MAX >==" << std::endl << std::endl << std::setfill(' ');
        Span sp(TEST_SMALL_LIMIT);
        sp.addNumber(INT_MIN);
        sp.addNumber(INT_MAX);
        print_sp_and_size(sp);
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< case4 : get Spans with negative numbers >==" << std::endl << std::endl << std::setfill(' ');
        Span sp(TEST_SMALL_LIMIT);
        sp.addNumber(-10);
        sp.addNumber(-20);
        sp.addNumber(-330);
        sp.addNumber(-100);
        print_sp_and_size(sp);
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< case5 : Span's iterator case >==" << std::endl << std::endl << std::setfill(' ');
        Span sp(TEST_SMALL_LIMIT);
        for (int i = 0; i < TEST_SMALL_LIMIT; i++)
        {
            sp.addNumber(rand());
        }
        Span::iterator it = sp.begin();
        std::cout << *it << std::endl;
        it++;
        std::cout << *it << std::endl;
        it--;
        std::cout << *it << std::endl;
        print_sp_and_size(sp);
    }
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "" << std::endl << std::endl << std::setfill(' ');
    system("leaks Span");
    return 0;
}