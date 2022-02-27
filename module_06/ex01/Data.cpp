/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 02:18:26 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 13:34:17 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
}

Data::Data(std::string &video_name, std::string &video_url) : video_name(video_name), video_url(video_url)
{
}

Data::~Data()
{
}

Data::Data(const Data& n)
{
    if (this != &n)
    {
        this->video_name = n.getName();
        this->video_url = n.getUrl();        
    }
}

Data& operator= (const Data& n)
{
    this = n;
    return *this;
}

std::string& Data::getName(void) const
{
    return this->video_name;
}

std::string& Data::getUrl(void) const
{
    return this->video_url;
}

uintptr_t serialize(Data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
}

std::ostream& operator<< (std::ostream& os, const Data& n)
{
    os << "[ name : " << n.getName() << " url : " << n.getUrl() << " ]";
    return os;
}

std::ostream& operator<< (std::ostream& os, uintptr_t& n)
{
    os << "Data : " << n;
    return os;
}