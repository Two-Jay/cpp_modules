/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:53:22 by jekim             #+#    #+#             */
/*   Updated: 2022/02/25 21:29:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

# define GRADE_TO_SIGN 145
# define GRADE_TO_EXC 137

class ShrubberyCreationForm : public Form
{
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const char *name);
        ShrubberyCreationForm(std::string &name);
        ShrubberyCreationForm(const ShrubberyCreationForm& n);
        virtual ~ShrubberyCreationForm();

        virtual void execute(Bureaucrat const & executor) const;

        ShrubberyCreationForm& operator= (const ShrubberyCreationForm& n);    
};

#endif // SHRUBBERYCREATIONFORM_HPP