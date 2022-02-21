/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:23:10 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 11:07:05 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int value) : value(value << this->frac_bits) {}

Fixed::Fixed(const Fixed& n) : value(n.getRawBits()) {}

Fixed::~Fixed(void) {}

Fixed::Fixed(const float value) : value(static_cast<int>(roundf(value * (1 << this->frac_bits)))) {}

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
    return static_cast<float>(this->getRawBits()) / (1 << this->frac_bits);
}

int Fixed::toInt(void) const
{
    return this->getRawBits() >> this->frac_bits;
}

Fixed Fixed::operator+ (const Fixed &n) const
{
    Fixed ret;
    
    ret.setRawBits(this->getRawBits() + n.getRawBits());
    return ret;
}

Fixed Fixed::operator- (const Fixed &n) const
{
    Fixed ret;
    
    ret.setRawBits(this->getRawBits() - n.getRawBits());
    return ret;
}

Fixed Fixed::operator* (const Fixed &n) const
{
    Fixed ret;
    
    ret.setRawBits(this->getRawBits() * n.getRawBits() / (1 << this->frac_bits));
    return ret;
}

Fixed Fixed::operator/ (const Fixed &n) const
{
    Fixed ret;
    
    ret.setRawBits(this->getRawBits() * (1 << this->frac_bits) / n.getRawBits());
    return ret;
}

bool Fixed::operator== (const Fixed &n) const
{
    return (this->getRawBits() == n.getRawBits());
}

bool Fixed::operator!= (const Fixed &n) const
{
    return (this->getRawBits() != n.getRawBits());
}

bool Fixed::operator>= (const Fixed &n) const
{
    return (this->getRawBits() >= n.getRawBits());
}

bool Fixed::operator<= (const Fixed &n) const
{
    return (this->getRawBits() <= n.getRawBits());
}

bool Fixed::operator> (const Fixed &n) const
{
    return (this->getRawBits() > n.getRawBits());
}

bool Fixed::operator< (const Fixed &n) const
{
    return (this->getRawBits() < n.getRawBits());
}

Fixed& Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);

    this->setRawBits(this->getRawBits() + 1);
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);

    this->setRawBits(this->getRawBits() - 1);
    return temp;
}

Fixed& Fixed::operator= (const Fixed &n)
{
    this->setRawBits(n.value);
    return (*this);
}

std::ostream& operator<< (std::ostream& os, const Fixed& n)
{
    os << n.toFloat();
    return os;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b; 
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a < b ? b : a; 
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (Fixed)a < (Fixed)b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (Fixed)a < (Fixed)b ? b : a;
}