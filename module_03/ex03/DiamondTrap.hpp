/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:00:10 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 19:01:49 by jekim            ###   ########.fr       */
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
        std::string name_;

    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& n);
        virtual ~DiamondTrap();

        void attack(std::string const &target);
        void whoAmI();
        std::string get_name(void) const;
        void set_name(std::string name);

        DiamondTrap& operator=(const DiamondTrap& n);
};

#endif