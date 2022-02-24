/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:47:24 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 21:18:43 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const p1, Point const p2, Point const p3, Point const point)
{
    Point v1 = p3 - p1;
    Point v2 = p3 - p2;
    Point vp = point - v1;

    return true;
}
