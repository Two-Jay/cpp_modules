/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:46:05 by jekim             #+#    #+#             */
/*   Updated: 2022/02/18 17:38:33 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
        HumanB();

    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& Weapon);
        void attack();
};

#endif