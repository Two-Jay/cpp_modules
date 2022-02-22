/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:28:43 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 18:54:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
    private :
        std::string idea[100];
        int index;
    
    public :
        Brain();
        Brain(const Brain &n);
        ~Brain();
        
        std::string getIdea(void);
        void setIdea(std::string input);\

        Brain& operator= (const Brain&);
};

#endif // BRAIN_HPP