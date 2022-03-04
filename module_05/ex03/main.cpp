/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 15:11:57 by jekim            ###   ########.fr       */
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
        
        Bureaucrat prs = Bureaucrat("president", 1);
        Form* ptr = i.makeForm("PresidentialPardonForm", "me");
        Form* ptr1 = i.makeForm("RobotomyRequestForm", "me1");
        Form* ptr2 = i.makeForm("ShrubberyCreationForm", "me2");
        Form* ptr3 = i.makeForm("Some strange", "me3");
        
        std::cout << prs << std::endl;
        std::cout << *ptr << " at " << ptr << std::endl;
        std::cout << *ptr1 << " at " << ptr1 << std::endl;
        std::cout << *ptr2 << " at " << ptr2 << std::endl;
        std::cout << ptr3 << std::endl;
        
        prs.signForm(*ptr);
        prs.signForm(*ptr);
        prs.executeForm(*ptr);

        prs.signForm(*ptr1);
        prs.executeForm(*ptr1);
        prs.signForm(*ptr2);
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