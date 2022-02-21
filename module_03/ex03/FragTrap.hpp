/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:58:32 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 15:20:32 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
    private :
        std::string name_;

    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& n);
        ~FragTrap();

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys(void);

        std::string get_name(void) const;
        void set_name(std::string name);

        FragTrap& operator= (const FragTrap& n);
};

#endif