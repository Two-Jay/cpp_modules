/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 02:17:13 by jekim             #+#    #+#             */
/*   Updated: 2022/02/28 03:48:21 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib> // std::size_t
#include <iostream>

template <typename T>
void iter(T* array, std::size_t size, void (*f)(T& ele))
{
    for (std::size_t i = 0; i < size; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void print(T& ele)
{
    std::cout << ele << " ";
}

#endif // ITER_HPP