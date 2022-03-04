/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/04 23:16:02 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    std::string name = "Nyan Cat [original]";
    std::string uploader = "Nyan Cat";
    std::string url = "https://www.youtube.com/watch?v=QH2-TGUlwu4&t=70s&ab_channel=NyanCat";
    
    Data video(name, uploader, url);
    uintptr_t ptr;

    std::cout << video << std::endl;
    std::cout << "address of Data : " << &video << std::endl;

    ptr = serialize(&video);

    std::cout << ptr << std::endl;
    Data *dptr = deserialize(ptr);
    std::cout << *dptr << std::endl;
    return (0);
}