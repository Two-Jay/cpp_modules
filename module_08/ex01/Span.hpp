/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:50:18 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 12:05:49 by jekim            ###   ########.fr       */
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
        std::size_t max;
        Span();

    public :
        typedef std::multiset<int>::iterator iterator;

        Span(unsigned int param);
        Span(const Span& n);

        iterator begin(void);
        iterator end(void);

        void addNumber(int param);
        void addNumber(iterator it_be, iterator it_end);

        std::size_t getMax(void) const;
        std::size_t size(void) const;
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

#endif // SPAN_HPP