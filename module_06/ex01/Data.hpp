/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:38:18 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 23:24:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data
{
    private:
        std::string video_name;
        std::string video_uploader;
        std::string video_url;

    public:
        Data(std::string video_name, std::string video_uploader, std::string video_url);
        Data(const Data& n);
        ~Data();

        std::string getName(void) const;
        std::string getUrl(void) const;
        std::string getUploader(void) const;

        Data& operator= (const Data &n);
};

std::ostream& operator<< (std::ostream& os, const Data& n);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif // DATA_HPP