/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:47:24 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 16:34:56 by jekim            ###   ########.fr       */
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
