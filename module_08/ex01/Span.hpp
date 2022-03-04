/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:50:18 by jekim             #+#    #+#             */
/*   Updated: 2022/03/03 01:32:56 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <set>
#include <iostream>
#include <stdexcept>

class Span {
    private :
        std::multiset<int> *storage;
        unsigned int max;
        Span();

    public :
        Span(unsigned int param);
        Span(const Span& n);

        void addNumber(int param);
        unsigned int getMax(void) const;
        void printNumber(void) const;
        unsigned int shortestSpan(void) const;
        unsigned int longestSpan(void) const;
        
        Span& operator= (const Span& n);

        class NotEnoughCapacity : public std::exception {
            const char *what(void) const throw();
        };

        class NotEnoughValuesToShortestSpan : public std::exception {
            const char *what(void) const throw();
        };


        ~Span();
};

std::ostream& operator<< (std::ostream& os, const Span& n);

#endif // SPAN_HPP