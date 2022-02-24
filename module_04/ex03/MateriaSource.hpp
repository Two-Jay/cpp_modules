/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:18:31 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 00:15:28 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

# define MS_INVEN_MAX 4

class MateriaSource : public IMateriaSource
{
    private :
        AMateria*   inventory[MS_INVEN_MAX];
        int         size;

    public :
        MateriaSource();
        MateriaSource(const MateriaSource& n);
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria* n);
        virtual AMateria* createMateria(std::string const & type);
        MateriaSource& operator= (const MateriaSource& n);
};

#endif // MATERIASOURCE_HPP
