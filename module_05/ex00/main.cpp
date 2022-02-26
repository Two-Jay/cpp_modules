/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 16:48:51 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat em("jekim");
    Bureaucrat em1("taeskim", 150);
    Bureaucrat em2("honlee", 1);

    std::cout << em << std::endl;
    std::cout << em1 << std::endl;
    std::cout << em2 << std::endl;
    try {
        // em.increaseGrade();
        // em2.increaseGrade(); // increaseGrade Exception
        // em.decreaseGrade();
        // em1.decreaseGrade(); // decreaseGrade Exception
        Bureaucrat em3("taeskim", 0); // Exception Handling with Construction
        Bureaucrat em4("honlee", 151); // Exception Handling with Construction
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    system("leaks Bureaucrat");
    return 0;
}