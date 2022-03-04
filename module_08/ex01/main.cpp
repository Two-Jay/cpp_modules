/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/03 01:36:30 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <cstdlib>
#include <ctime>

#define TEST_SMALL_LIMIT 10
#define TEST_LARGE_LIMIT 10000

int main()
{
    // seeding for rand();
    srand(time(NULL));

    Span sp(TEST_SMALL_LIMIT);
    for (int i = 0; i < TEST_SMALL_LIMIT; i++)
    {
        sp.addNumber(rand());
    }
    sp.printNumber();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    system("leaks Span");
}