/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:53:27 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 18:40:10 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int param) {
    storage = new std::multiset<int>;
    max = param;
}

Span::~Span() {
    this->storage->clear();
    delete this->storage;
};

Span::Span(const Span& n) {
    if (this != &n)
    {
        storage = new std::multiset<int>(*n.storage);
        max = n.getMax();
    }
}

Span& Span::operator= (const Span& n) {
    this->storage->clear();
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
    if (this->size() == max)
    {
        throw (NotEnoughCapacity());
    }
    if (std::find(this->begin(), this->end(), n) != this->end())
    {
        throw (DuplicatedValue());
    }
    storage->insert(n);
}

unsigned int Span::shortestSpan(void) const {
    std::size_t size = this->size();
    if (size < 2)
    {
        throw (NotEnoughValuesToShortestSpan());
    }
    unsigned int ret = UINT_MAX;
    unsigned int sum = 0;
    std::multiset<int>::iterator it1 = this->begin();
    std::multiset<int>::iterator it2 = ++(this->begin());
    for (std::size_t i = 0; i < size - 1; i++)
    {
        sum = *it2 - *it1;
        if (ret > sum)
            ret = sum;
        it1++;
        it2++;
    }
    return ret;
}

unsigned int Span::longestSpan(void) const {
    if (size() < 2)
    {
        throw (NotEnoughValuesToLongestSpan());
    }
    return (*(this->storage->rbegin()) - *(this->storage->begin()));
}

const char *Span::NotEnoughCapacity::what(void) const throw() {
    return "\'Span\' - Error : Not enough capacity to store a value";
}

const char *Span::NotEnoughValuesToShortestSpan::what(void) const throw() {
    return "\'Span\' - Error : Not enough values to run Span::ShortestSpan()";
}

const char *Span::NotEnoughValuesToLongestSpan::what(void) const throw() {
    return "\'Span\' - Error : Not enough values to run Span::LongestSpan()";
}

const char *Span::DuplicatedValue::what(void) const throw() {
    return "\'Span\' - Error : duplicated value in Container";
}

void Span::printNumber(void) const {
    for (std::multiset<int>::iterator iter = storage->begin(); iter != storage->end() ; iter++)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

Span::iterator Span::begin(void) const
{
    return this->storage->begin();
}

Span::iterator Span::end(void) const
{
    return this->storage->end();
}

Span::reverse_iterator Span::rbegin(void) const
{
    return this->storage->rbegin();
}

Span::reverse_iterator Span::rend(void) const
{
    return this->storage->rend();
}