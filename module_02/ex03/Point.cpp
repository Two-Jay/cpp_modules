/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:47:28 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 11:12:46 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {}
Point::~Point() {}
Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y) { }
Point::Point(const Point& p) { *this = p; }

Fixed const Point::get_Fixed_x(void) const { return this->x; }
Fixed const Point::get_Fixed_y(void) const { return this->y; }

Point& Point::operator= (const Point& p)
{
    (Fixed)this->x = p.get_Fixed_x();
    (Fixed)this->y = p.get_Fixed_y();
    return *this;
}

std::ostream& operator<< (std::ostream& os, Point& p)
{
    os << "[x: " << p.get_Fixed_x() << " y: " << p.get_Fixed_y() << "]";
    return os;
}

std::ostream& operator<< (std::ostream& os, const Point& p)
{
    os << "[x: " << p.get_Fixed_x() << " y: " << p.get_Fixed_y() << "]";
    return os;
}