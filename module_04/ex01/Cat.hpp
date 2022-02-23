/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:35:33 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 10:50:18 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public Animal {
    private :
        Brain* brain;

    public : 
        Cat();
        Cat(const Cat &n);
        virtual ~Cat();
        virtual void makeSound(void) const;
    
        void think_idea(std::string idea);
        std::string remember_last_idea(void);
        void forget_last_idea(void);
        
        Cat& operator= (const Cat &n);
};

#endif