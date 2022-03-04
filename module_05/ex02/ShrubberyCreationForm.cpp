/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:53:19 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 14:53:48 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Basic", GRADE_TO_SIGN_SHRB, GRADE_TO_EXC_SHRB)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const char *name) : Form(name, GRADE_TO_SIGN_SHRB, GRADE_TO_EXC_SHRB)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& name) : Form(name, GRADE_TO_SIGN_SHRB, GRADE_TO_EXC_SHRB)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& n) : Form(n)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    try {
        std::string file_name= executor.getName() + "_shrubbery";
        std::ofstream file;
        file.open(file_name, std::ios::trunc);
        if (!file.is_open())
        {
            throw (FileOpenError());
        }
        std::string tree =      "         %%%,%%%%%%%\n"
                                "          ,'%% \\-*%%%%%%%\n"
                                "    ;%%%%%*%   _%%%%\n"
                                "     ,%%%       \\(_.*%%%%.\n"
                                "     % *%%, ,%%%%*( %%%*%'\n"
                                "   %^     ,*%%% )\\|,%%*%,_\n"
                                "        *%    \\/ #).-\"*%%*\n"
                                "             _.) ,/ *%,\n"
                                "     _________/)#(_____________\n";
        file << tree;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& n)
{
    return (*(dynamic_cast<ShrubberyCreationForm*>(&(Form::operator=(n)))));
}

const char *ShrubberyCreationForm::FileOpenError::what(void) const throw() {
    return "Error : file isn't opened.";
}