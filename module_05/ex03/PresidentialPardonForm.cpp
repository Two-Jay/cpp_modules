/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:28:21 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 17:13:07 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Basic", GRADE_TO_SIGN_PRESI, GRADE_TO_EXC_PRESI)
{
}

PresidentialPardonForm::PresidentialPardonForm(const char *name) : Form(name, GRADE_TO_SIGN_PRESI, GRADE_TO_EXC_PRESI)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string& name) : Form(name, GRADE_TO_SIGN_PRESI, GRADE_TO_EXC_PRESI)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& n) : Form(n)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::cout << "[ <" << executor.getName() << "> has been pardoned by Zafod Beeblebrox. ]" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& n)
{   
    return (*(dynamic_cast<PresidentialPardonForm*>(&(Form::operator=(n)))));
}