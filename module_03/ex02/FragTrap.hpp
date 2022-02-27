/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:58:32 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 18:55:39 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

# define FRAGTRAP_DEFAULT_SUFFIX "_frag_trap"
# define FRAGTRAP_DEFAULT_NAME "basic_frag_trap"
# define FRAGTRAP_DEFAULT_HP 100
# define FRAGTRAP_DEFAULT_EP 100
# define FRAGTRAP_DEFAULT_DAMAGE 30
# define FRAGTRAP_DEFAULT_TYPE "FragTrap"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& n);
        virtual ~FragTrap(); // You should call Child class with virtual keyword to call Parent class's destructor. 

        void highFivesGuys(void);

        FragTrap& operator= (const FragTrap& n);
};

#endif