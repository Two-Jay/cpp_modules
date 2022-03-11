/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 17:05:31 by jekim            ###   ########.fr       */
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

void print_spans_and_size(Span& sp)
{
    std::cout << "Max : " << sp.getMax() << " , Size : " << sp.size() << std::endl;
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
        sp.printNumber();
        print_spans_and_size(sp);
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
        sp1.printNumber();
        sp->printNumber();
        print_spans_and_size(sp1);
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
        sp.printNumber();
        print_spans_and_size(sp);
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Span : addNumber with iterator :: exception >==" << std::endl << std::endl << std::setfill(' ');
        Span sp1(TEST_SMALL_LIMIT);
        Span sp(TEST_SMALL_LIMIT);
        for (int i = 0; i < TEST_SMALL_LIMIT; i++)
        {
            sp.addNumber(rand());
        }
        try {
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
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< Span : edge case >==" << std::endl << std::endl << std::setfill(' ');
        Span sp(TEST_SMALL_LIMIT);
        sp.addNumber(10);
        sp.addNumber(100);
        sp.addNumber(120);
        sp.addNumber(121);
        sp.addNumber(1000);
        sp.addNumber(105);
        sp.printNumber();
        print_spans_and_size(sp);
    }
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "" << std::endl << std::endl << std::setfill(' ');
    system("leaks Span");
    return 0;
}