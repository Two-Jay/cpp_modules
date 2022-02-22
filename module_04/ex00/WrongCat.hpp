/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:59:47 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 18:25:03 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal {
    public : 
        WrongCat();
        WrongCat(const WrongCat &n);
        virtual ~WrongCat();
        virtual void makeSound(void) const;

        WrongCat& operator= (const WrongCat &n);
};

#endif // WRONGCAT_HPP