/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 14:43:39 by jekim            ###   ########.fr       */
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
    Bureaucrat em7 = em2;
    std::cout << em7 << std::endl;
    try {
        // em.increaseGrade();
        // std::cout << em << std::endl;
        // em2.increaseGrade(); // increaseGrade Exception
        // std::cout << em2 << std::endl;
        // em.decreaseGrade();
        // std::cout << em << std::endl;
        // em1.decreaseGrade(); // decreaseGrade Exception
        // std::cout << em1 << std::endl;
        Bureaucrat em3("ex1", 0); // Exception Handling with Construction
        Bureaucrat em4("ex2", 151); // Exception Handling with Construction
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    system("leaks Bureaucrat > leaks_result && cat leaks_result | grep leaks && rm -rf leaks_result");
    return 0;
}