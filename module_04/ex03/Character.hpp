/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:24:22 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 02:31:47 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

# define CHARANTER_INVEN_MAX 4

class Character : public ICharacter
{
    private :
        std::string name;
        AMateria*   inventory[CHARANTER_INVEN_MAX];
        int         size;
    
    public :
        Character();
        Character(std::string name);
        virtual ~Character();
        Character(const Character& n);
        Character& operator= (const Character& n);

        void setName(std::string& name);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

        AMateria* get_indexed_inventory(int idx);
};

#endif // CHARACTER_HPP
