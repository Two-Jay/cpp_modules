/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:18:07 by jekim             #+#    #+#             */
/*   Updated: 2022/02/18 23:09:55 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <iostream>
#include <fstream>

class Replacer {
    private :
        Replacer();
        std::ifstream file_from;
        std::ofstream file_to;
        std::string to_find;
        std::string to_replace;

    public :
        ~Replacer();
        Replacer(char *argv[]);
        bool open_pipeline(char *file_name);
        bool close_pipeline(void);
        void replace(void);
};

bool non_input_checker(char **argv);

#endif
