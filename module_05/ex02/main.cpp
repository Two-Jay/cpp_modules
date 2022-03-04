/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 15:05:27 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try {
        PresidentialPardonForm C = PresidentialPardonForm("Zarford");
        RobotomyRequestForm B = RobotomyRequestForm("Nyam");
        ShrubberyCreationForm A = ShrubberyCreationForm("Nyam");
        Bureaucrat me = Bureaucrat("me", 1);
        std::string input;

        me.signForm(A);
        me.signForm(B);
        me.signForm(C);

        std::cout << A << std::endl;
        std::cout << B << std::endl;
        std::cout << C << std::endl;

        me.executeForm(A);
        me.executeForm(B);
        me.executeForm(C);
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    system("leaks Lets_get_28B");
    return 0;
}