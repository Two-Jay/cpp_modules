/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:43:38 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 12:43:03 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

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
    if (this != &n)
    {
        std::string& ref = const_cast<std::string &>(this->_name);
        ref = n.getName();
        this->_grade = n.getGrade();
    }
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& n)
{
    if (this != &n)
    {
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
    this->_grade++;
}

void Bureaucrat::decreaseGrade(void)
{
    if (this->_grade == 150)
        throw (GradeTooLowException());
    std::cout << "decreased!" << std::endl;
    this->_grade--;
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& n)
{
    os << "Bureaucrat < name : " << n.getName() << " | grade : " << n.getGrade() << " >";
    return os;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "< Bureaucrat > : the grade is too high.";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "< Bureaucrat > : the grade is too low.";
}
