/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 03:51:42 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        Intern i;
        
        Bureaucrat me = Bureaucrat("me", 30);
        Bureaucrat prs = Bureaucrat("prsident", 1);
        Form* ptr = i.makeForm("PresidentialPardonForm", "me");
        Form* ptr1 = i.makeForm("RobotomyRequestForm", "me1");
        Form* ptr2 = i.makeForm("ShrubberyCreationForm", "me2");
        Form* ptr3 = i.makeForm("Some strange", "me3");
        
        me.signForm(*ptr);
        me.increaseGrade();
        me.increaseGrade();
        me.increaseGrade();
        me.increaseGrade();
        me.increaseGrade();
        me.increaseGrade();
        std::cout << me << std::endl;
        me.signForm(*ptr);
        me.executeForm(*ptr);
        prs.executeForm(*ptr);

        me.signForm(*ptr1);
        prs.executeForm(*ptr1);
        me.signForm(*ptr2);
        prs.executeForm(*ptr2);
        delete ptr;
        delete ptr1;
        delete ptr2;
        delete ptr3;
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    system("leaks Lets_get_28B");
    return 0;
}