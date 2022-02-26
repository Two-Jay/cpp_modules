/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 21:32:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try {
        // PresidentialPardonForm A = PresidentialPardonForm("Zarford");
        // RobotomyRequestForm A = RobotomyRequestForm("Nyam");
        ShrubberyCreationForm A = ShrubberyCreationForm("Nyam");
        Bureaucrat me = Bureaucrat("me", 30);
        Bureaucrat hm = Bureaucrat("hm", 20);
        Bureaucrat hhm = Bureaucrat("hhm", 4);
        std::string input;

        me.signForm(A);

        std::cout << hm << std::endl;
        std::cout << hhm << std::endl;
        std::cout << A << std::endl;

        me.executeForm(A);
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    system("leaks Lets_get_28B");
    return 0;
}