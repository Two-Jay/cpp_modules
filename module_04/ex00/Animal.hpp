/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:57 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 18:51:34 by jekim            ###   ########.fr       */
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
        ~Animal();
        
        void setType(std::string input);
        std::string getType(void);
        void makeSound(void);
        
        Animal& operator= (const Animal &n);
};

#endif