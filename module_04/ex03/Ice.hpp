/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:04:24 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 15:05:24 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        Ice(const Ice& n);
        ~Ice();
        
        virtual AMateria* clone();
        virtual void use(ICharacter& target);

        Ice& operator= (const Ice& n);
};

#endif // ICE_HPP