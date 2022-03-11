/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 00:46:53 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 19:29:16 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>

template <typename C>
typename C::iterator easyfind(C& container, int value) {
    typename C::iterator ret = std::find(container.begin(), container.end(), value);
    if (ret == container.end())
    {
        std::string err = "Error_Function_[easyfind] : not found in Container";
        throw (std::runtime_error(err));
    }
    return ret;
};

#endif // EASYFIND_HPP