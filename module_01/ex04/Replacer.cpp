/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:54:16 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 16:40:23 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <iostream>
#include <fstream>
#include <string>

Replacer::Replacer() {}
Replacer::~Replacer() {}

Replacer::Replacer(char **argv)
{
    this->to_find = argv[2];
    this->to_replace = argv[3];
}

bool Replacer::open_pipeline(char *file_name)
{
    std::string fn(file_name);
    this->file_from.open(file_name);
    if (!this->file_from.is_open())
    {
        return false;
    }
    this->file_to.open(fn + ".replace", std::ios::trunc);
    if (!this->file_to.is_open())
    {
        this->file_from.close();
        return false;
    }
    return true;
}

bool Replacer::close_pipeline(void)
{
    this->file_from.close();
    this->file_to.close();
    return true;
}

void Replacer::replace(void)
{
    std::string line;
    std::string::size_type to_find_l = this->to_find.length();
    std::string::size_type to_replace_l = this->to_replace.length();

    while (getline(this->file_from, line))
    {
        std::string::size_type n = 0;

        while ((n = line.find(this->to_find, n)) != std::string::npos)
        {
            line.erase(n, to_find_l);
            line.insert(n, to_replace);
            n += to_replace_l;
        }
        this->file_to << line << std::endl;
    }
}

static int ft_strlen(char *str)
{
    int i = -1;
    while (str[++i]) ;
    return i;
}

bool non_input_checker(char **argv)
{
    int c = 1;
    while (argv[c])
    {
        if (!ft_strlen(argv[c++])) return false;
    }
    return true;
}