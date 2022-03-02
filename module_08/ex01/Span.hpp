/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:50:18 by jekim             #+#    #+#             */
/*   Updated: 2022/03/02 20:34:56 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <array>
#include <iostream>

class Span {
    private :
        std::array<int, unsigned int>   storage;
        Span();

    public :
        Span(unsigned int param);
        Span(const Span& n);
        ~Span();

        void addNumber(int param);
        std::size_t size(void);

        Span& operator= (const Span& n);
}

std::ostream& operator<< (std::ostream& os, const Span& n);


#endif // SPAN_HPP