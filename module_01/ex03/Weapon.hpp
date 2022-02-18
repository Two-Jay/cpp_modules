/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:26:56 by jekim             #+#    #+#             */
/*   Updated: 2022/02/17 16:27:16 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
    private :
        std::string name;
        Weapon();

    public :
        Weapon(std::string type);
        ~Weapon();
        void    setType(std::string type);
        const std::string& getType(void);
};

#endif