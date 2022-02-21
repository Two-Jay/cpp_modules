/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:46 by jekim             #+#    #+#             */
/*   Updated: 2022/02/19 22:08:38 by jekim            ###   ########.fr       */
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

        friend std::ostream& operator<< (std::ostream& os, const Fixed& n);
};



#endif