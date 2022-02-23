/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:28:43 by jekim             #+#    #+#             */
/*   Updated: 2022/02/22 20:50:59 by jekim            ###   ########.fr       */
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
        int get_last_index(void) const;
        void increase_last_index(void);
        void set_idea(std::string input);

        Brain& operator= (const Brain&);
};

#endif // BRAIN_HPP