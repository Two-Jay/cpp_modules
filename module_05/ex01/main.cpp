/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 14:23:43 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Form a = Form("some of docs");
        Form b = Form("some of very important docs", 20, 10);
        Form c = Form("some of trash", 150, 130);
        
        Bureaucrat me("me", 30);

        std::cout << me << std::endl;
        std::cout << a << std::endl; // 50/80
        std::cout << b << std::endl; // 20/10
        std::cout << c << std::endl; // 130/150
        
        me.signForm(a);
        me.signForm(b); // sign error!
        me.signForm(c);
        std::cout << a << std::endl; // 50/80
        std::cout << b << std::endl; // 20/10
        std::cout << c << std::endl; // 130/150
        for (int i = 0; i < 15; i++)
        {
            me.increaseGrade();
        }
        std::cout << me << std::endl;
        me.signForm(b); // signed !
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    system("leaks Form");
    return 0;
}