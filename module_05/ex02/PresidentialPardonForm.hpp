/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:58:02 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 21:14:25 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

# define GRADE_TO_SIGN_PRESI 25
# define GRADE_TO_EXC_PRESI 5

class PresidentialPardonForm : public Form
{
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const char *name);
        PresidentialPardonForm(std::string &name);
        PresidentialPardonForm(const PresidentialPardonForm& n);
        virtual ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const & executor) const;

        PresidentialPardonForm& operator= (const PresidentialPardonForm& n);
};

#endif // PRESIDENTIALPARDONFORM_HPP