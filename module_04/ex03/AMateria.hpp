/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:00:57 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 17:41:41 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
    protected :
        std::string type;
        
    public :
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria& n);
        virtual ~AMateria();
        
        void setType(std::string const &type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        AMateria& operator= (const AMateria& n);
};

#endif // AMateria_HPP