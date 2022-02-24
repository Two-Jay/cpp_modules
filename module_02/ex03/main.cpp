/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 11:56:47 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <iomanip>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {

    float x1,y1,x2,y2,x3,y3;

    std::cout << "what is x position of Point 1 : ";
    std::cin >> x1;
    std::cout << "what is y position of Point 1 : ";
    std::cin >> y1;
    std::cout << "what is x position of Point 2 : ";
    std::cin >> x2;
    std::cout << "what is y position of Point 2 : ";
    std::cin >> y2;
    std::cout << "what is x position of Point 3 : ";
    std::cin >> x3;
    std::cout << "what is y position of Point 3 : ";
    std::cin >> y3;

    int range_from, range_to;

    std::cout << "which integer is the range start ? : ";
    std::cin >> range_from;
    std::cout << "which integer is the range end ? : ";
    std::cin >> range_to;


    Point a(Fixed((float)x1), Fixed((float)y1));
    Point b(Fixed((float)x2), Fixed((float)y2));
    Point c(Fixed((float)x3), Fixed((float)y3));

    std::cout << "P1 is : " << a << std::endl;
    std::cout << "P2 is : " << b << std::endl;
    std::cout << "P3 is : " << c << std::endl;
    int j = range_from;
    for (int i = range_from; i <= range_to; i++)
    {
        Point *ptr = new Point(Fixed(i), Fixed(j));
        std::cout 
            << "bsp result with point : " << *ptr << " is... (true as 1) : "
            << bsp(a, b, c, *ptr) << std::endl;
        delete ptr;
        j++;
    }

    return 0;
}