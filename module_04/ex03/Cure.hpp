/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:43:49 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 17:24:07 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure& n);
        virtual ~Cure();
        
        virtual AMateria* clone();
        virtual void use(ICharacter& target);

        Cure& operator= (const Cure& n);
};

#endif // CURE_HPP