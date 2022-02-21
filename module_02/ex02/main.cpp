/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/19 23:35:44 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    Fixed c((float)20.25);
    Fixed d = b;

    std::cout << std::setw(60) << std::setfill('=') << "" << std::endl << std::setfill(' ');
    std::cout << "comparion operator test" << std::endl;
    std::cout << "t1 : " << a << " | t2 : " << b
        << " | result [>] (1 as true) : " << (a > b) << std::endl;
    std::cout << "t1 : " << c << " | t2 : " << b
        << " | result [>] (1 as true) : " << (c > b) << std::endl;
    std::cout << std::setw(60) << std::setfill('.') << "" << std::endl << std::setfill(' ');

    std::cout << "t1 : " << a << " | t2 : " << b
        << " | result [<] (1 as true) : " << (a < b) << std::endl;
    std::cout << "t1 : " << c << " | t2 : " << b
        << " | result [<] (1 as true) : " << (c < b) << std::endl;
    std::cout << std::setw(60) << std::setfill('-') << "" << std::endl << std::setfill(' ');

    std::cout << "t1 : " << d << " | t2 : " << b
        << " | result [<=] (1 as true) : " << (d <= b) << std::endl;
    std::cout << "t1 : " << a << " | t2 : " << b
        << " | result [<=] (1 as true) : " << (a <= b) << std::endl;
    std::cout << "t1 : " << c << " | t2 : " << b
        << " | result [<=] (1 as true) : " << (c <= b) << std::endl;
    std::cout << std::setw(60) << std::setfill('.') << "" << std::endl << std::setfill(' ');

    std::cout << "t1 : " << d << " | t2 : " << b
        << " | result [>=] (1 as true) : " << (d >= b) << std::endl;
    std::cout << "t1 : " << a << " | t2 : " << b
        << " | result [>=] (1 as true) : " << (a >= b) << std::endl;
    std::cout << "t1 : " << c << " | t2 : " << b
        << " | result [>=] (1 as true) : " << (c >= b) << std::endl;
    std::cout << std::setw(60) << std::setfill('-') << "" << std::endl << std::setfill(' ');

    std::cout << "t1 : " << d << " | t2 : " << b
        << " | result [==] (1 as true) : " << (d == b) << std::endl;
    std::cout << "t1 : " << a << " | t2 : " << b
        << " | result [==] (1 as true) : " << (a == b) << std::endl;
    std::cout << "t1 : " << c << " | t2 : " << b
        << " | result [==] (1 as true) : " << (c == b) << std::endl;
    std::cout << std::setw(60) << std::setfill('.') << "" << std::endl << std::setfill(' ');

    std::cout << "t1 : " << d << " | t2 : " << b
        << " | result [!=] (1 as true) : " << (d != b) << std::endl;
    std::cout << "t1 : " << a << " | t2 : " << b
        << " | result [!=] (1 as true) : " << (a != b) << std::endl;
    std::cout << "t1 : " << c << " | t2 : " << b
        << " | result [!=] (1 as true) : " << (c != b) << std::endl;
    std::cout << std::setw(60) << std::setfill('=') << "" << std::endl << std::setfill(' ');

    return 0;
}