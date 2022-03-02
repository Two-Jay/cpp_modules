/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:53:27 by jekim             #+#    #+#             */
/*   Updated: 2022/03/02 20:34:35 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() {};

Span::Span(unsigned int param)
{
    this->storage = std::array<int, param>; 
}

void Span::addNumber(unsigned int n)
{
    if (this->size() == this->storage.capacity())
    {
        std::cout << "Error !" << std::endl;
        return ;        
    }
    this->storage.push_back(n);
    this->size++;
}

std::size_t Span::size(void)
{
    return this->storage.size();
}