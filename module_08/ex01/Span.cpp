/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:53:27 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 13:51:29 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int param) {
    storage = new std::multiset<int>;
    max = param;
}

Span::~Span() {
    delete this->storage;
    max = 0;
};

Span::Span(const Span& n) {
    if (this != &n)
    {
        storage = new std::multiset<int>(*n.storage);
        max = n.getMax();
    }
}

Span& Span::operator= (const Span& n) {

    delete this->storage;
    this->storage = new std::multiset<int>(*n.storage);
    this->max = n.getMax();
    return *this;
} 

std::size_t Span::getMax(void) const {
    return this->max;
}

std::size_t Span::size(void) const {
    return this->storage->size();
}

void Span::addNumber(int n)
{
    try {
        if (this->storage->size() == max)
        {
            throw (NotEnoughCapacity());
        }
        storage->insert(n);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void Span::addNumber(Span::iterator it_be, Span::iterator it_end)
{
    try {
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
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

unsigned int Span::shortestSpan(void) const {
    try {
        std::size_t size = this->size();
        if (size < 2)
        {
            throw (NotEnoughValuesToShortestSpan());
        }
        int ret = INT_MAX;
        int sum = 0;
        std::multiset<int>::iterator it1 = this->storage->begin();
        std::multiset<int>::iterator it2 = ++(this->storage->begin());
        for (std::size_t i = 0; i < size - 1; i++)
        {
            sum = *it2 - *it1;
            if (ret > sum)
                ret = sum;
            it1++;
            it2++;
        }
        return ret;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return -1;
    }
}

unsigned int Span::longestSpan(void) const {
    try {
        if (size() < 2)
        {
            throw (NotEnoughValuesToShortestSpan());
        }
        return (*(this->storage->rbegin()) - *(this->storage->begin())); 
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return -1;
    }
}

const char *Span::NotEnoughCapacity::what(void) const throw() {
    return "\'Span\' - Error : Not enough capacity to store a value";
}

const char *Span::NotEnoughValuesToShortestSpan::what(void) const throw() {
    return "\'Span\' - Error : Not enough values to run Span::ShortestSpan()";
}

void Span::printNumber(void) const {
    for (std::multiset<int>::iterator iter = storage->begin(); iter != storage->end() ; iter++)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

Span::iterator Span::begin(void)
{
    return this->storage->begin();
}

Span::iterator Span::end(void)
{
    return this->storage->end();
}