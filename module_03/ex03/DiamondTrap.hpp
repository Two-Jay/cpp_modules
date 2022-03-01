/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:00:10 by jekim             #+#    #+#             */
/*   Updated: 2022/03/01 22:50:16 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

# define DIAMONDTRAP_DEFAULT_SUFFIX "_diamond_trap"
# define DIAMONDTRAP_DEFAULT_NAME "basic_diamond_trap"
# define DIAMONDTRAP_DEFAULT_TYPE "DiamondTrap"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string _name;
        std::string _type;

    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& n);
        virtual ~DiamondTrap();

        std::string getName() const;
        void setName(std::string name);
        virtual void attack(std::string const &target);
        void whoAmI();

        DiamondTrap& operator=(const DiamondTrap& n);

        virtual void type_tagged_logger_nonendl(std::ostream& os, std::string msg);
        virtual void type_tagged_logger(std::ostream &os, std::string msg);
};

#endif