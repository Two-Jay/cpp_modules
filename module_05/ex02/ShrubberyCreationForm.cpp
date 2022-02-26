/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:53:19 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 21:32:03 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Basic", GRADE_TO_SIGN, GRADE_TO_EXC)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const char *name) : Form(name, GRADE_TO_SIGN, GRADE_TO_EXC)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& name) : Form(name, GRADE_TO_SIGN, GRADE_TO_EXC)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& n) : Form(n)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::cout << "[ <" << executor.getName() << "> get a tree !]" << std::endl;
    std::string tree =      "         %%%,%%%%%%%\n"
                            "          ,'%% \\-*%%%%%%%\n"
                            "    ;%%%%%*%   _%%%%\n"
                            "     ,%%%       \\(_.*%%%%.\n"
                            "     % *%%, ,%%%%*( %%%*%'\n"
                            "   %^     ,*%%% )\\|,%%*%,_\n"
                            "        *%    \\/ #).-\"*%%*\n"
                            "             _.) ,/ *%,\n"
                            "     _________/)#(_____________\n";
    std::cout << tree;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& n)
{
    return (*(dynamic_cast<ShrubberyCreationForm*>(&(Form::operator=(n)))));
}