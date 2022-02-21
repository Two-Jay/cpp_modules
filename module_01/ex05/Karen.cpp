/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:00:34 by jekim             #+#    #+#             */
/*   Updated: 2022/02/19 02:10:19 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
#include <string>

Karen::Karen() {}
Karen::~Karen() {}

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "[ Karen : " << DEBUG_MSG << " ]" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "[ Karen : " << INFO_MSG << " ]" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "[ Karen : " << WARNING_MSG << " ]" << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "[ Karen : " << ERROR_MSG << " ]" << std::endl;
}

void Karen::exception(void)
{
    std::cout << "[ EXCEPTION ]" << std::endl;
    std::cout << "[ Karen : " << EXCEPTION_MSG << " ]" << std::endl;
}


void Karen::complain(std::string level)
{
    int i = 0;
    void (Karen::*fptr[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::exception};
    std::string keyword[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    while (i < 4 && level != keyword[i])
        i++;
    (this->*fptr[i])();
}
