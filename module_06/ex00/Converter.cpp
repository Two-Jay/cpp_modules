/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:24:03 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 21:29:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <string>

Converter::Converter() {}
Converter::Converter(const char *argv) : value(0.0)
{
    char *pEnd = NULL;
    this->value = strtod(argv, &pEnd);
}

Converter::~Converter() {}
Converter::Converter(const Converter& n)
{
    if (this != &n)
    {
        this->value = n.getValue();
    }
}

Converter& Converter::operator= (const Converter& n)
{
    if (this != &n)
    {
        this->value = n.getValue();
    }
    return *this;
}

double Converter::getValue(void) const
{
    return this->value;
}

bool Converter::printToInt(std::ostream &os) const
{
    int value = static_cast<int>(this->value);
    if (std::isnan(value) || std::isinf(value))
    {
        os << HEAD_INT << MSG_VAR_IMP << std::endl;
        return true;
    }
    else if (this->value < INT_MIN || this->value > INT_MAX)
    {
        os << HEAD_INT << MSG_VAR_NONDSP << std::endl;
        return true;        
    }
    else
    {
        os << HEAD_INT << value << std::endl;
        return true;        
    }
    return false;    
}

bool Converter::printToChar(std::ostream &os) const
{
    char value = static_cast<char>(this->value);
    if (std::isnan(value) || std::isinf(value))
    {
        os << HEAD_CHAR << MSG_VAR_IMP << std::endl;
        return true;
    }
    else if (this->value < 0 || this->value > CHAR_MAX || !std::isprint(value))
    {
        os << HEAD_CHAR << MSG_VAR_NONDSP << std::endl;
        return true;        
    }
    else
    {
        os << HEAD_CHAR << value << std::endl;
        return true;        
    }
    return false;
}

bool Converter::printToFloat(std::ostream &os) const
{
    float value = static_cast<float>(this->value);
    if (std::isnan(value) || std::isinf(value))
    {
        os << HEAD_FLOAT << std::showpos << value << "f" << std::endl;
        return true;
    }
    else if (value == static_cast<int>(value))
    {
        std::cout << HEAD_FLOAT << std::setprecision(std::numeric_limits<float>::digits10) << value << ".0f" << std::endl;
    }
    else
    {
        os <<  HEAD_FLOAT << value << "f" << std::endl;
        return true;        
    }
    return false;
}

bool Converter::printToDouble(std::ostream &os) const
{
    double value = this->value;
    if (std::isnan(value) || std::isinf(value))
    {
        os << HEAD_DOUBLE << std::showpos << value << std::endl;
        return true;
    }        
    else if (value == static_cast<int>(value))
    {
        std::cout << HEAD_DOUBLE << std::setprecision(std::numeric_limits<float>::digits10) << value << ".0" << std::endl;
        return true;
    }
    else
    {
        os <<  HEAD_DOUBLE << value << std::endl;
        return true;        
    }
    return false;
}

const char *Converter::BadInput::what(void) const throw()
{
    return "Converter : Bad Input.";
}

void Converter::print_converted(void)
{
    this->printToChar(std::cout);
    this->printToInt(std::cout);
    this->printToFloat(std::cout);
    this->printToDouble(std::cout);
}
