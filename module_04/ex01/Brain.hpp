/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:28:43 by jekim             #+#    #+#             */
/*   Updated: 2022/02/23 10:49:28 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
    private :
        std::string idea[100];
        int last_index;
    
    public :
        Brain();
        Brain(const Brain &n);
        ~Brain();
        
        std::string get_idea(int index) const;
        void pull_idea(int idx);
        void set_idea(std::string input);

        int get_last_index(void) const;
        void increase_last_index(void);
        void decrease_last_index(void);

        Brain& operator= (const Brain&);
};

#endif // BRAIN_HPP