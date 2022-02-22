/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:35:33 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 18:04:37 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>

class Dog : public Animal {
    public : 
        Dog();
        Dog(const Dog &n);
        virtual ~Dog();
        virtual void makeSound(void) const;

        Dog& operator= (const Dog &n);
};

#endif // DOG_HPP