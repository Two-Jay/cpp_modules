/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:58:32 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 18:56:46 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
    private :
        std::string name_;

    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& n);
        virtual ~FragTrap();

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys(void);

        std::string get_name(void) const;
        void set_name(std::string name);

        FragTrap& operator= (const FragTrap& n);
};

#endif