/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 01:37:55 by jekim             #+#    #+#             */
/*   Updated: 2022/03/03 10:44:17 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public :
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


        iterator begin(void) {
            return this->c.begin();
        }

        iterator end(void) {
            return this->c.end();
        }

        const_iterator cbegin(void) const {
            return this->c.cbegin();
        }

        const_iterator cend(void) const {
            return this->c.cend();
        }

        reverse_iterator rbegin(void) {
            return this->c.rbegin();
        }

        reverse_iterator rend(void) {
            return this->c.rend();
        }

        const_reverse_iterator crbegin(void) const {
            return this->c.crbegin();
        }

        const_reverse_iterator crend(void) const {
            return this->c.crend();
        }

        MutantStack() {};
        ~MutantStack() {};
        MutantStack(const MutantStack& n) { *this = n;}
        MutantStack& operator= (const MutantStack& n) { *this = n; return *this; };
};

#endif