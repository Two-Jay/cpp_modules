/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/03/11 03:07:27 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <array>
#include <deque>
#include <list>
#include <vector>
#include "easyfind.hpp"

#define TEST_MAX 10
# define HEAD_WIDTH 70

int main(int, char**)
{
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< easyfind : vector tests >==" << std::endl << std::endl << std::setfill(' ');
        std::vector<int> int_vector;
        for (size_t i = 0; i < TEST_MAX; i++)
        {
            int_vector.push_back(i * 10);
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "< values in vector >==" << std::endl << std::endl << std::setfill(' ');
        for (size_t i = 0; i < int_vector.size(); i++)
        {
            std::cout << int_vector[i] << " ";
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "" << std::endl << std::endl << std::setfill(' ');
        try {
            std::vector<int>::iterator it = easyfind(int_vector, 30);
            std::cout << *it << std::endl;
            it = easyfind(int_vector, 60);
            std::cout << *it << std::endl;
            it = easyfind(int_vector, 0);
            std::cout << *it << std::endl;
            it = easyfind(int_vector, 90);
            std::cout << *it << std::endl;
            it = easyfind(int_vector, 55);
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< easyfind : deque tests >==" << std::endl << std::endl << std::setfill(' ');
        std::deque<int> int_deque;
        for (size_t i = 0; i < TEST_MAX; i++)
        {
            int_deque.push_back(i * 10);
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "< values in deque >==" << std::endl << std::endl << std::setfill(' ');
        for (size_t i = 0; i < int_deque.size() ; i++)
        {
            std::cout << int_deque[i] << " ";
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "" << std::endl << std::endl << std::setfill(' ');
        try {
            std::deque<int>::iterator it = easyfind(int_deque, 30);
            std::cout << *it << std::endl;
            it = easyfind(int_deque, 60);
            std::cout << *it << std::endl;
            it = easyfind(int_deque, 0);
            std::cout << *it << std::endl;
            it = easyfind(int_deque, 90);
            std::cout << *it << std::endl;
            it = easyfind(int_deque, 55);
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< easyfind : array tests >==" << std::endl << std::endl << std::setfill(' ');
        std::array<int, TEST_MAX> int_array;
        for (size_t i = 0; i < TEST_MAX; i++)
        {
            int_array.at(i) = i * 10;
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "< values in array >==" << std::endl << std::endl << std::setfill(' ');
        for (size_t i = 0; i < int_array.size(); i++)
        {
            std::cout << int_array[i] << " ";
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "" << std::endl << std::endl << std::setfill(' ');
        try {
            std::array<int, TEST_MAX>::iterator it = easyfind(int_array, 30);
            std::cout << *it << std::endl;
            it = easyfind(int_array, 60);
            std::cout << *it << std::endl;
            it = easyfind(int_array, 0);
            std::cout << *it << std::endl;
            it = easyfind(int_array, 90);
            std::cout << *it << std::endl;
            it = easyfind(int_array, 55);
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "< easyfind : list tests >==" << std::endl << std::endl << std::setfill(' ');
        std::list<int> int_list;
        for (size_t i = 0; i < TEST_MAX; i++)
        {
            int_list.push_back(i * 10);
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "< values in list >==" << std::endl << std::endl << std::setfill(' ');
        std::list<int>::iterator it = int_list.begin();
        for (size_t i = 0; i < int_list.size(); i++)
        {
            std::cout << *it++ << " ";
        }
        std::cout << std::endl << std::setw(HEAD_WIDTH / 2) << std::setfill('.') << "" << std::endl << std::endl << std::setfill(' ');
        try {
            it = easyfind(int_list, 30);
            std::cout << *it << std::endl;
            it = easyfind(int_list, 60);
            std::cout << *it << std::endl;
            it = easyfind(int_list, 0);
            std::cout << *it << std::endl;
            it = easyfind(int_list, 90);
            std::cout << *it << std::endl;
            it = easyfind(int_list, 55);
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }    
    }
    std::cout << std::endl << std::setw(HEAD_WIDTH) << std::setfill('=') << "" << std::endl << std::endl << std::setfill(' ');
    return 0;
}



