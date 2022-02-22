/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:57 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 18:26:02 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
    protected :
        std::string type;

    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &n);
        virtual ~WrongAnimal();
        
        void setType(std::string input);
        std::string getType(void) const;
        void makeSound(void) const;
        
        WrongAnimal& operator= (const WrongAnimal &n);
};

#endif // WRONGANIMAL_HPP