/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:47:24 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 18:21:46 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

float simple_abs(float a)
{
    return a < 0 ? a * -1 : a;
}

// formula for area of a triangle with 3 point in 2D
// == x1 * (y2-y3) + x2 * (y3 - y1) + x3 * (y1 - y2) * 1/2
float area(Point const v1, Point const v2, Point const v3)
{
   return simple_abs((v1.get_Fixed_x() *((v2 - v3).get_Fixed_y()) + v2.get_Fixed_x() * ((v3 - v1).get_Fixed_y())+ v3.get_Fixed_x() *((v1 - v2).get_Fixed_y())).toFloat()) / (float)2.0;
}
  
bool bsp(Point const p1, Point const p2, Point const p3, Point const point)
{  
   float A = area (p1, p2, p3);
   float A1 = area (point, p2, p3);
   float A2 = area (p1, point, p3);
   float A3 = area (p1, p2, point);
    
   return (Fixed(A) == Fixed(A1) + Fixed(A2) + Fixed(A3));
}