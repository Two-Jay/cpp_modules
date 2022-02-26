/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:59:11 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 21:14:36 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

# define GRADE_TO_SIGN_ROBO 72
# define GRADE_TO_EXC_ROBO 45

class RobotomyRequestForm : public Form
{
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const char *name);
        RobotomyRequestForm(std::string &name);
        RobotomyRequestForm(const RobotomyRequestForm& n);
        virtual ~RobotomyRequestForm();

        virtual void execute(Bureaucrat const & executor) const;

        RobotomyRequestForm& operator= (const RobotomyRequestForm& n);   
};

#endif // ROBOTOMYREQUESTFORM_HPP