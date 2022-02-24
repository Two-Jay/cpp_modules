/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:05:20 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 09:49:55 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
    protected :
        std::string type;
        
    public :
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& n);
        ~AMateria();
        
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        AMateria& operator= (const AMateria& n);
};

#endif // AMATERIA_HPP