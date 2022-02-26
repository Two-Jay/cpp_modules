/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:38:18 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 21:40:38 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
    private:
        /* data */
    public:
        Data();
        Data(std::string video_name, std::string video_url);
        Data(const Data& n);
        ~Data();

        uintptr_t
        Data& operator= ();
};

#endif // DATA_HPP