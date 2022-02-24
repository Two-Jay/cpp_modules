/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:23:10 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 21:33:18 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << this->frac_bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = static_cast<int>(roundf(value * (1 << this->frac_bits)));
}

Fixed::Fixed(const Fixed& n)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = n; //* Copy constructor with Assignation operator  
}

Fixed& Fixed::operator= (const Fixed &n)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = n.value;
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->value) / (1 << this->frac_bits);
}

int Fixed::toInt(void) const
{
    return this->value >> this->frac_bits;
}

std::ostream& operator<< (std::ostream& os, const Fixed& n)
{
    os << n.toFloat();
    return os;
}