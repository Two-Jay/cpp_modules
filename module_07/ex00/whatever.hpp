/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:52:58 by jekim             #+#    #+#             */
/*   Updated: 2022/02/28 02:12:46 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
	T Temp = a;
	a = b;
	b = Temp;
}

template <typename T>
T min(T a, T b) {
    return a > b ? b : a;
}

template <typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

#endif //WHATEVER_HPP