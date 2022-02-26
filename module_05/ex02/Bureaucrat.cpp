/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:43:38 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 10:42:49 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    const std::string name = "Unknown";
    std::string& ref = const_cast<std::string &>(this->_name);
    ref = name;
    this->_grade = 75;
}

Bureaucrat::Bureaucrat(std::string name)
{
    std::string& ref = const_cast<std::string &>(this->_name);
    ref = name;
    this->_grade = 75;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade < GRADE_MAX)
        throw (GradeTooHighException());
    if (grade > GRADE_MIN)
        throw (GradeTooLowException());
    std::string& ref = const_cast<std::string &>(this->_name);
    ref = name;
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& n)
{
    std::string& ref = const_cast<std::string &>(this->_name);
    ref = n.getName();
    this->_grade = n.getGrade();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& n)
{
    if (this != &n)
    {
        std::string& ref = const_cast<std::string &>(this->_name);
        ref = n.getName();
        this->_grade = n.getGrade();        
    }
    return *this;
}

int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

// 함수 자체를 const로 설정하면 ...
const std::string& Bureaucrat::getName(void) const
{
    return this->_name;
}

void Bureaucrat::setName(std::string &name)
{
    std::string& ref = const_cast<std::string &>(this->_name);
    ref = name;
}

void Bureaucrat::increaseGrade(void)
{
    if (this->_grade == 1)
        throw (GradeTooHighException());
    std::cout << "increased!" << std::endl;
    this->_grade--;
}

void Bureaucrat::decreaseGrade(void)
{
    if (this->_grade == 150)
        throw (GradeTooLowException());
    std::cout << "decreased!" << std::endl;
    this->_grade++;
}

void Bureaucrat::signForm(Form& n)
{
    try {
        if (n.isSigned() == true)
            throw (AlreadySignedException());
        n.beSigned(*this);
        std::cout << "< bureaucrat \"" << this->getName() << "\" > signs <" << n.getName() << ">" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "< bureaucrat \"" << this->getName() << "\" > cannot sign <" << n.getName() << "> because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form)
{
    try {
        if (form.isSigned() == false)
            throw (ExcuteSignException());
        if (this->getGrade() > form.getGradeToExcute())
            throw (GradeTooLowException());
        form.execute(*this);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& n)
{
    os << "< Bureaucrat \""<< n.getName() <<"\" ; grade [" << n.getGrade() << "] >";
    return os;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "[ Bureaucrat : the grade is too high ]";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "[ Bureaucrat : the grade is too low ]";
}

const char *Bureaucrat::ExcuteSignException::what(void) const throw()
{
    return "[ Bureaucrat : this form isn't signed ]";
}

const char *Bureaucrat::AlreadySignedException::what(void) const throw()
{
    return "[ Bureaucrat : this form is already signed ]";
}