/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:20:46 by jekim             #+#    #+#             */
/*   Updated: 2022/02/19 10:31:27 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
    private :
        int value;
        static const int    frac_bits = 8;
        
    public :
        Fixed();
        Fixed(const Fixed& n);
        ~Fixed();
        Fixed &operator= (const Fixed& n);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif