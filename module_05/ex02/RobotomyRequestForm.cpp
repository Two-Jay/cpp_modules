/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:00:30 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 14:54:28 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

static int get_random_number(void)
{
    static int flag;
    if (flag == 0)
    {
        srand(time(NULL));
        flag++;        
    }
    return rand();
}

RobotomyRequestForm::RobotomyRequestForm() : Form("Basic", GRADE_TO_SIGN_ROBO, GRADE_TO_EXC_ROBO)
{
}

RobotomyRequestForm::RobotomyRequestForm(const char *name) : Form(name, GRADE_TO_SIGN_ROBO, GRADE_TO_EXC_ROBO)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string& name) : Form(name, GRADE_TO_SIGN_ROBO, GRADE_TO_EXC_ROBO)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& n) : Form(n)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int coin = get_random_number() % 2;
    
    if (coin == 1)
    {
        std::cout << "[ ㄴㅁㄱ Bureaucrat < " << executor.getName() << " > has been robotomized! ㄴㅁㄱ ]" << std::endl;
    }
    else
    {
        std::cout << "[ ** No one has been robotomized! ** ]" << std::endl;
    }
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& n)
{
    return (*(dynamic_cast<RobotomyRequestForm*>(&(Form::operator=(n)))));
}