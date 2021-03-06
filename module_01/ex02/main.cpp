/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:24:47 by jekim             #+#    #+#             */
/*   Updated: 2022/02/21 20:24:48 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::setw(25) << "std::string : " << str << std::endl;
	std::cout << std::setw(25) << "value on stringPTR : " << *stringPTR << std::endl;
	std::cout << std::setw(25) << "stringREF : " << stringREF << std::endl;

	std::cout << std::setw(50) << std::setfill('-') << "" << std::endl << std::setfill(' ');

	std::cout << std::setw(25) << "address of std::string : " << &str << std::endl;
	std::cout << std::setw(25) << "stringPTR : " << stringPTR << std::endl;
	std::cout << std::setw(25) << "address of stringREF : " << &stringREF << std::endl;

	return 0;
}