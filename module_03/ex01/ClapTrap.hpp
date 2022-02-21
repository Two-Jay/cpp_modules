/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:42:45 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 15:25:24 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
    private :
        std::string name_;

    protected :
        unsigned int hitpoints_;
        unsigned int energy_points_;
        unsigned int attack_damage_;

    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& n);
        ~ClapTrap();

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        std::string get_name() const;
        unsigned int get_hitpoints() const;
        unsigned int get_energy_points() const;
        unsigned int get_attack_damage() const;

        void set_name(std::string name);
        void set_hitpoints(unsigned int amount);
        void set_energy_points(unsigned int amount);
        void set_attack_damage(unsigned int amount);

        ClapTrap& operator= (const ClapTrap& n);
};

#endif
