/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/02/27 23:23:26 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    std::string name = "아!! 터치하지 말라구!!";
    std::string uploader = "개발자 라라";
    std::string url = "https://www.youtube.com/watch?v=aMALA9eIl-M&ab_channel=%EA%B0%9C%EB%B0%9C%EC%9E%90%EB%9D%BC%EB%9D%BC";
    
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