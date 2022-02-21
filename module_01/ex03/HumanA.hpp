/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:27:04 by jekim             #+#    #+#             */
/*   Updated: 2022/02/18 16:50:35 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
        HumanA(void);

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void attack(void);
};

#endif