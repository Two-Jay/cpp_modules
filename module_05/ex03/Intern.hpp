/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:44:08 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 10:32:41 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <string>
#include <stdexcept>

# define DOCTYPE_0 "PresidentialPardonForm"
# define DOCTYPE_1 "RobotomyRequestForm"
# define DOCTYPE_2 "ShrubberyCreationForm"
# define DOCTYPE_LIST_LEN 3


class Intern {
    public :
        Intern();
        Intern(const Intern &n);
        ~Intern();

        Form* makeForm(std::string form_name, std::string target);

        Intern& operator= (const Intern &n);

        class NoMatchFormName : public std::exception
        {
            const char *what(void) const throw();
        };
};

#endif // INTERN_HPP