/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:03:04 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 20:20:31 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>

# define SCAVTRAP_DEFAULT_SUFFIX "_scav_trap"
# define SCAVTRAP_DEFAULT_NAME "basic_scav_trap"
# define SCAVTRAP_DEFAULT_HP 100
# define SCAVTRAP_DEFAULT_EP 50
# define SCAVTRAP_DEFAULT_DAMAGE 20
# define SCAVTRAP_DEFAULT_TYPE "ScavTrap"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& n);
        virtual ~ScavTrap(); // You should call Child class with virtual keyword to call Parent class's destructor. 

        void guardGate();
        ScavTrap& operator= (const ScavTrap& n);
};

#endif