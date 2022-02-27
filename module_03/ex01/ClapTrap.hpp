/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:42:45 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 18:46:24 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

# define CLAPTRAP_DEFAULT_SUFFIX "_clap_trap"
# define CLAPTRAP_DEFAULT_NAME "basic_clap_trap"
# define CLAPTRAP_DEFAULT_HP 10
# define CLAPTRAP_DEFAULT_EP 10
# define CLAPTRAP_DEFAULT_DAMAGE 0
# define CLAPTRAP_DEFAULT_TYPE "ClapTrap"

class ClapTrap {
    protected :
        std::string _name;
        std::string _type;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& n);
        virtual ~ClapTrap();

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        std::string getName() const;
        std::string getType() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;

        void setName(std::string name);
        void setType(std::string type);
        void setHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);
        void setAttackDamage(unsigned int amount);

        void type_tagged_logger_nonendl(std::ostream& os, std::string msg);
        void type_tagged_logger(std::ostream &os, std::string msg);

        ClapTrap& operator= (const ClapTrap& n);
};

#endif

