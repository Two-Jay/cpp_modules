/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:01:29 by jekim             #+#    #+#             */
/*   Updated: 2022/02/24 18:05:07 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource& n)
{    
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria*)
{
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
}

MateriaSource& MateriaSource::operator= (const MateriaSource& n)
{
}