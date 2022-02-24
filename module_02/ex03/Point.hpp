/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:47:34 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 11:20:44 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point 
{
    private :
        const Fixed x;
        const Fixed y;

    public :
        Point();
        ~Point();
        Point(const Point& p);
        Point(const Fixed& x, const Fixed& y);
        Point& operator= (const Point& p);
        Fixed const get_Fixed_x(void) const;
        Fixed const get_Fixed_y(void) const;

        Point operator- (const Point &n) const;
        Point operator+ (const Point &n) const;
        Point operator* (const Point &n) const;
        Point operator/ (const Point &n) const;

        friend std::ostream& operator<< (std::ostream& os, Point& p);
        friend std::ostream& operator<< (std::ostream& os, const Point& p);
};

#endif