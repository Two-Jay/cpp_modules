/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:35:33 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 11:18:58 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Dog : public Animal {
    private :
        Brain* brain;

    public : 
        Dog();
        Dog(const Dog &n);
        virtual ~Dog();
        virtual void makeSound(void) const;
    
        void think_idea(std::string idea);
        std::string remember_last_idea(void);
        void forget_last_idea(void);
        
        Dog& operator= (const Dog &n);
};


#endif // DOG_HPP