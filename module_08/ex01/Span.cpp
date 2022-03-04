/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:53:27 by jekim             #+#    #+#             */
/*   Updated: 2022/03/03 01:35:52 by jekim            ###   ########.fr       */
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

unsigned int Span::getMax(void) const {
    return this->max;
}

void Span::addNumber(int n) {

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

unsigned int Span::shortestSpan(void) const {
    try {
        if (this->storage->size() < 2)
        {
            throw (NotEnoughValuesToShortestSpan());
        }
        return (*(++(this->storage->begin())) - *(this->storage->begin()));
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl; 
        return -1;
    }
}

unsigned int Span::longestSpan(void) const {
    try {
        if (this->storage->size() < 2)
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