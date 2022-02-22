/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:57 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 17:56:44 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
    protected :
        std::string type;

    public :
        Animal();
        Animal(std::string type);
        Animal(const Animal &n);
        virtual ~Animal();
        
        void setType(std::string input);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        
        Animal& operator= (const Animal &n);
};

#endif // ANIMAL_HPP