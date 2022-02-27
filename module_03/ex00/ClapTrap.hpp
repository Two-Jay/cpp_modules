/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:42:45 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 17:22:13 by jekim            ###   ########.fr       */
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
    private :
        std::string name_;
        std::string type_;
        unsigned int hitPoints_;
        unsigned int energyPoints_;
        unsigned int attackDamage_;

    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& n);
        ~ClapTrap();

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

        ClapTrap& operator= (const ClapTrap& n);
};

#endif

