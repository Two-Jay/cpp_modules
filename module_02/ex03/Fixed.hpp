/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:46 by jekim             #+#    #+#             */
/*   Updated: 2022/02/20 02:15:06 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private :
        int value;
        static const int    frac_bits = 8;
        
    public :
        Fixed();
        Fixed(const int param);
        Fixed(const float param);
        Fixed(const Fixed& n);
        ~Fixed();
        
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
        
        Fixed& operator= (const Fixed& n);
        Fixed operator+ (const Fixed& n) const;
        Fixed operator- (const Fixed& n) const;
        Fixed operator* (const Fixed& n) const;
        Fixed operator/ (const Fixed& n) const;

        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        bool operator== (const Fixed& n) const;
        bool operator!= (const Fixed& n) const;
        bool operator>= (const Fixed& n) const;
        bool operator<= (const Fixed& n) const;
        bool operator> (const Fixed& n) const;
        bool operator< (const Fixed& n) const;

        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
        friend std::ostream& operator<< (std::ostream& os, const Fixed& n);
};



#endif