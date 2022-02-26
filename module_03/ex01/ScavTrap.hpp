/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:03:04 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 17:00:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
    private :
        std::string name_;

    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& n);
        virtual ~ScavTrap(); // You should call Child class with virtual keyword to call Parent class's destructor. 

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();

        std::string get_name(void) const;
        void set_name(std::string name);

        ScavTrap& operator= (const ScavTrap& n);
};

#endif