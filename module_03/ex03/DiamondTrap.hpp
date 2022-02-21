/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:00:10 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 11:31:48 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string name;

    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& n);
        ~DiamondTrap();

        void attack(std::string const &target);
        void whoAmI();
        // diamondtrap.cpp 메모 참고
        // std::string get_name(void) const;
        // void set_name(std::string name);

        DiamondTrap& operator=(const DiamondTrap& n);
};

#endif