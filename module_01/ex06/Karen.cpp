/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:00:34 by jekim             #+#    #+#             */
/*   Updated: 2022/02/19 02:14:36 by jekim            ###   ########.fr       */
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
    std::string keyword[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    while (i < 4 && level != keyword[i])
        i++;
    switch (i)
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break ;
        default :
            this->exception();
    }        
}
