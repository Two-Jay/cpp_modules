/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:06:15 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 14:52:28 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : _name("Unknown_Form"),
    _grade_to_sign(50),
    _grade_to_excute(80),
    _be_signed(false)
{
}

Form::Form(const char* name)
    : _name(name),
    _grade_to_sign(50),
    _grade_to_excute(80),
    _be_signed(false)
{
}

Form::Form(const char* name, int grade_to_sign, int grade_to_excute)
    : _name(name),
    _grade_to_sign(grade_to_sign),
    _grade_to_excute(grade_to_excute),
    _be_signed(false)
{
}

Form::Form(std::string &name, int grade_to_sign, int grade_to_excute)
    : _name(name),
    _grade_to_sign(grade_to_sign),
    _grade_to_excute(grade_to_excute),
    _be_signed(false)
{
}

Form::~Form()
{
}

Form::Form(const Form& n)
    : _name("Unknown_Form"),
    _grade_to_sign(0),
    _grade_to_excute(0)
{
    if (this != &n)
    {
        std::string& name_ref = const_cast<std::string &>(this->_name);
        name_ref = n.getName();
        int& int_ref = const_cast<int &>(this->_grade_to_sign);
        int_ref = n.getGradeToSign();
        int_ref = const_cast<int &>(this->_grade_to_excute);
        int_ref = n.getGradeToExcute();
        this->_be_signed = n.isSigned();        
    }
}

Form& Form::operator= (const Form& n)
{
    std::string& name_ref = const_cast<std::string &>(this->_name);
    name_ref = n.getName();
    int& int_ref = const_cast<int &>(this->_grade_to_sign);
    int_ref = n.getGradeToSign();
    int_ref = const_cast<int &>(this->_grade_to_excute);
    int_ref = n.getGradeToExcute();
    this->_be_signed = n.isSigned();
    return *this;
}

const int& Form::getGradeToExcute(void) const
{
    return this->_grade_to_excute;
}

const int& Form::getGradeToSign(void) const
{
    return this->_grade_to_sign;
}

const std::string& Form::getName(void) const
{
    return this->_name;
}

bool Form::isSigned(void) const
{
    return this->_be_signed;
}

void Form::beSigned(const Bureaucrat& n)
{
    if (n.getGrade() > this->getGradeToSign())
        throw (GradeTooLowException());
    this->_be_signed = true;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return "[ Form : the grade is too high ]";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return "[ Form : the grade is too low ]";
}

std::ostream& operator<< (std::ostream &os, const Form& n)
{
    os << "< \"" << n.getName() << "\" ; grade [" << n.getGradeToSign() << "/" << n.getGradeToExcute()<<"] ; signed [" << (n.isSigned() ? "true" : "false") << "] >";
    return os;
}