/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 00:46:53 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 03:07:04 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>

template <typename C>
typename C::iterator easyfind(C& container, int value) {
    typename C::iterator ret = std::find(std::begin(container), std::end(container), value);
    if (ret == std::end(container))
    {
        std::string err = "Error_Function_[easyfind] : " + std::to_string(value) + " is not found in Container";
        throw (std::runtime_error(err));
    }
    return ret;
};

#endif // EASYFIND_HPP