/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:01:39 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 10:50:26 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# define GRADE_MAX 1
# define GRADE_MIN 150

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    private :
        const std::string _name;
        const int _grade_to_sign;
        const int _grade_to_excute;
        bool _be_signed;
        
    public :
        Form();
        Form(const char *name);
        Form(const char* name, int grade_to_sign, int grade_to_excute);
        Form(std::string& name);
        Form(std::string& name, int grade_to_sign, int grade_to_excute);
        virtual ~Form();
        Form(const Form& n);

        const int& getGradeToExcute(void) const;
        const int& getGradeToSign(void) const;
        const std::string& getName(void) const;
        bool isSigned(void) const;
        void beSigned(const Bureaucrat& n);
        virtual void execute(Bureaucrat const & executor) const = 0;
    
        class GradeTooHighException : public std::exception 
        {
            const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what(void) const throw();
        };
        
        Form& operator= (const Form& n);
};

std::ostream& operator<< (std::ostream& os, const Form& n);

#endif