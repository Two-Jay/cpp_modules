/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:24:01 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 23:25:17 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <stdexcept>

#define MSG_VAR_NONDSP "Non displayable"
#define MSG_VAR_IMP "Impossible"

#define HEAD_INT "int: "
#define HEAD_CHAR "char: "
#define HEAD_FLOAT "float: "
#define HEAD_DOUBLE "double: "


class Converter {
    private :
        double value;
        Converter();
        bool printToInt(std::ostream &os) const;
        bool printToChar(std::ostream &os) const;
        bool printToFloat(std::ostream &os) const;
        bool printToDouble(std::ostream &os) const;

    public :
        Converter(std::string &input);
        Converter(const Converter& n);
        ~Converter();

        double getValue() const;
        void print_converted(void);
        Converter& operator=(const Converter& n);
};

#endif // CONVERTER_HPP