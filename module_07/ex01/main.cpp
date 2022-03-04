/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/03 01:05:56 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int  i[5] = { 1, 2, 3, 4, 5 };
    char c[6] = "hello";
    double seed = 42.4242;
    double d[5] = { seed, seed * 2, seed * 3, seed * 4, seed * 5};

    iter(i, sizeof(i) / sizeof(*i), print);
    iter(c, sizeof(c) / sizeof(*c), print);
    iter(d, sizeof(d) / sizeof(*d), print);
    return 0;
}