/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:52:59 by jekim             #+#    #+#             */
/*   Updated: 2022/03/01 00:31:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdlib>
#include <stdexcept>

template <typename T>
class Array {
    private :
        T* _elems;
        std::size_t _size;
    
    public :
        Array() : _elems(NULL), _size(0) {
            _elems = new T[0];
        };
        Array(unsigned int n) : _elems(NULL), _size(n) {
            _elems = new T[n];
        };
        Array(const Array& n) {
            if (n.size() > 0)
            {
                delete[] this->_elems;
                this->_elems = NULL;                
            }
            this->_size = n.size();
            this->_elems = new T[this->_size];
            for (std::size_t i = 0; i < _size; i++) {
                this->_elems[i] = n._elems[i];
            }
        };
        ~Array() {
            if (this->_size > 0)
            {
                delete[] this->_elems;
                this->_elems = NULL;
                this->_size = 0;
            }
        };
        std::size_t size(void) const {
            return this->_size;
        }

        Array& operator= (const Array &n) {
            *this = n;
            return *this;
        };
        T& operator[](int idx) {
            if (idx < 0 || (std::size_t)idx >= _size)
                throw (IndexRangeError());
            return _elems[idx];
        };
        class IndexRangeError : public std::exception {
            const char *what(void) const throw() {
                return "Error :  bad_index_range";
            };
        };
};

#endif // ARRAY_HPP
