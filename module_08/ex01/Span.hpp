/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:50:18 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 15:26:19 by jekim            ###   ########.fr       */
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
        typedef std::multiset<int>::reverse_iterator reverse_iterator;

        Span(unsigned int param);
        Span(const Span& n);

        iterator begin(void) const;
        iterator end(void) const;
        reverse_iterator rbegin(void) const;
        reverse_iterator rend(void) const;

        void addNumber(int param);
        template<typename InputIt>
        void addNumber(InputIt& it_be, InputIt& it_end)
        {
            long remain = this->getMax() - this->size();
            if (std::distance(it_be, it_end) > remain)
            {
                throw (NotEnoughCapacity());
            }
            while (it_be != it_end)
            {
                this->storage->insert(*it_be);
                it_be++;
            }
        }

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
        class NotEnoughValuesToLongestSpan : public std::exception {
            const char *what(void) const throw();
        };

        ~Span();
};

#endif // SPAN_HPP