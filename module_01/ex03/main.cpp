/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:27:19 by jekim             #+#    #+#             */
/*   Updated: 2022/02/18 22:33:00 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("crude spike club");
		HumanA bob("Bob", club);

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::setfill('-') << std::setw(45) << '' << std::endl << std::setfill(' ');
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
	
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();		
	}
	return 0;
}