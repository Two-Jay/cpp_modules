/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:43:41 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 15:03:11 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

# define GRADE_MAX 1
# define GRADE_MIN 150

class Form;

class Bureaucrat
{
    private :
        const std::string _name;
        int _grade;

    public :
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& n);
        ~Bureaucrat();

        void setName(std::string &name);
        const std::string getName(void) const;
        int getGrade(void) const;
        void increaseGrade(void);
        void decreaseGrade(void);
        void signForm(Form& n);
        void executeForm(Form const & form);

        Bureaucrat& operator= (const Bureaucrat& n);

        class GradeTooHighException : public std::exception 
        {
            const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what(void) const throw();
        };
        class ExcuteSignException : public std::exception
        {
            const char *what(void) const throw();
        };
        class AlreadySignedException : public std::exception
        {
            const char *what(void) const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &n);

#endif