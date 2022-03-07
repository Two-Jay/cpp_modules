/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:50:24 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 19:52:25 by jekim            ###   ########.fr       */
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

Form* Intern::makePresidentialPardonForm(std::string &target)
{
    std::cout << "Intern creates PresidentialPardonForm." << std::endl;
    return new PresidentialPardonForm(target);
}
Form* Intern::makeRobotomyRequestForm(std::string &target)
{
    std::cout << "Intern creates RobotomyRequestForm." << std::endl;
    return new RobotomyRequestForm(target);
}
Form* Intern::makeShrubberyCreationForm(std::string &target)
{
    std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
    return new RobotomyRequestForm(target);    
}

Form* Intern::makeForm(std::string form_name, std::string target)
{
    std::string list[DOCTYPE_LIST_LEN] = { DOCTYPE_0, DOCTYPE_1, DOCTYPE_2 };
    Form* (Intern::*fptr[DOCTYPE_LIST_LEN])(std::string& target) =
        { &Intern::makePresidentialPardonForm,
            &Intern::makeRobotomyRequestForm,
            &Intern::makeShrubberyCreationForm };
    try {
            for (int i = 0; i < DOCTYPE_LIST_LEN; i++) {
                if (list[i] == form_name)
                    return (this->*fptr[i])(target);
            }
            throw (NoMatchFormName());
    } catch (std::exception& e) {
        std::cout << "Notice : the intern cannot make a form because " << e.what() << std::endl;
    }
    return NULL;
}

const char *Intern::NoMatchFormName::what(void) const throw()
{
    return "[ Intern : there is no matched form_type ]";
}