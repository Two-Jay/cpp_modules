/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 01:37:55 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 16:43:00 by jekim            ###   ########.fr       */
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

        reverse_iterator rbegin(void) {
            return this->c.rbegin();
        }

        reverse_iterator rend(void) {
            return this->c.rend();
        }

        const_iterator begin(void) const {
            return this->c.begin();
        }

        const_iterator end(void) const {
            return this->c.end();
        }

        const_reverse_iterator rbegin(void) const {
            return this->c.rbegin();
        }

        const_reverse_iterator rend(void) const {
            return this->c.rend();
        }


        MutantStack() {};
        ~MutantStack() {};
        MutantStack(const MutantStack& n) { if (this != &n ){ *this = n; }}
        MutantStack& operator= (const MutantStack& n) { *this = n; return *this; };
};

#endif // MUTANTSTACK_HPP