/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:35:33 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 18:04:31 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>

class Cat : public Animal {
    public : 
        Cat();
        Cat(const Cat &n);
        virtual ~Cat();
        virtual void makeSound(void) const;

        Cat& operator= (const Cat &n);
};

#endif