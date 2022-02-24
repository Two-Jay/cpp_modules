/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:43:49 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 09:50:22 by jekim            ###   ########.fr       */
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
        ~Cure();
        
        AMateria* clone();
        void use(ICharacter& target);

        Cure& operator= (const AMateria& n);
};

#endif // CURE_HPP