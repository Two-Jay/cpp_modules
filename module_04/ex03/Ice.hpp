/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:04:24 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 01:11:52 by jekim            ###   ########.fr       */
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
        virtual ~Ice();
        
        virtual Ice* clone() const;
        virtual void use(ICharacter& target);

        Ice& operator= (const Ice& n);
};

#endif // ICE_HPP