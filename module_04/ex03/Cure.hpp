/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:43:49 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 01:12:01 by jekim            ###   ########.fr       */
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
        
        virtual Cure* clone() const;
        virtual void use(ICharacter& target);

        Cure& operator= (const Cure& n);
};

#endif // CURE_HPP