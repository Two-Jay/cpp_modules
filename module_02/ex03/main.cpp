/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 21:21:08 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <iomanip>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {

    Point a(Fixed(15), Fixed(0));
    Point b(Fixed(15), Fixed(15));
    Point c(Fixed(0), Fixed(0));

    Point d = b;
    std::cout << d << std::endl;
    std::cout 
        << bsp(a, b, c, Point(Fixed(9), Fixed(9))) << std::endl;
    system("leaks BSP");
    return 0;
}