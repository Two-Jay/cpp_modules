/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:52:59 by jekim             #+#    #+#             */
/*   Updated: 2022/02/28 04:23:15 by jekim            ###   ########.fr       */
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
        Array(std::size_t size) : _elems(NULL), _size(size) {
            _elems = new T[size];
        };
        Array(const Array& n) {
            // 배열을 복사생성할 때 this의 T랑 n의 T랑 다를 수도 있지않나...?
            if (n.size() > 0) {
                delete[] this->_elems;
                this->_elems = NULL;
                this->_size = n.size();
                this->_elems = new T[this->_size];
            }
        };
        ~Array() {
            if (_size > 0)
            {
                delete[] _elems;
                _elems = NULL;
                _size = 0;
            }
        };

        std::size_t size(void) {
            return this->_size;
        }
        Array& operator= (const Array &n) {
            if (n.size() > 0) {
                delete[] this->_elems;
                this->_elems = NULL;
                this->_size = n.size();
                this->_elems = new T[this->_size];
            }
        };
        class IndexRangeError : public std::exception {
            const char *what(void) const throw();
        };
    // Array* operator[](const Array* n);
};

#endif // ARRAY_HPP
