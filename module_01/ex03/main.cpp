/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:27:19 by jekim             #+#    #+#             */
/*   Updated: 2022/02/17 16:27:20 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "HumanA.hpp"
#include "Weapon.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("crude spike club");
		HumanA	bob = HumanA("bob", club);

		std::cout << "type : " << club.getType() << std::endl;
		bob.attack();
		club.setType("Some other type of club");
		std::cout << "type : " << club.getType() << std::endl;
		bob.attack();
	}
	return 0;
}