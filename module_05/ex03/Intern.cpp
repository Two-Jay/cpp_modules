/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:50:24 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 11:11:40 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &n) {
    (void)n;
}
Intern::~Intern() {}
Intern& Intern::operator=(const Intern &n) {
    (void)n;    
    return *this;
}

Form* Intern::makeForm(std::string form_name, std::string target)
{
    std::string list[DOCTYPE_LIST_LEN] = { DOCTYPE_0, DOCTYPE_1, DOCTYPE_2 };
    int i = -1;
    while (++i < DOCTYPE_LIST_LEN)
    {
        if (list[i] == form_name)
            break ;
    }
    try {
        switch (i)
        {
            case 0:
                return new PresidentialPardonForm(target);
            case 1:
                return new RobotomyRequestForm(target);
            case 2:
                return new ShrubberyCreationForm(target);
            default:
                throw (NoMatchFormName());
        }
    } catch (std::exception& e) {
        std::cout << "Notice : the intern cannot make a form because " << e.what() << std::endl;
    }
    return NULL;
}

const char *Intern::NoMatchFormName::what(void) const throw()
{
    return "[ Intern : there is no matched form_type ]";
}