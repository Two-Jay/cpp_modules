/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/02/26 18:17:57 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Converter c = Converter(argv[1]);

        c.print_converted();
    }
    // system("leaks converter");
    return 0;
    // (void)argc;
    // (void)argv;
    // const char* p = "111.11 -2.22 0X1.BC70A3D70A3D7P+6 -Inf 1.18973e+4932zzz";
    // char* end;
    // std::cout << "Parsing \"" << p << "\":\n";
    // for (double f = std::strtod(p, &end); p != end; f = std::strtod(p, &end))
    // {
    //     std::cout << "  '" << std::string(p, end-p) << "' -> ";
    //     p = end;
    //     if (errno == ERANGE){
    //         std::cout << "range error, got ";
    //         errno = 0;
    //     }
    //     std::cout << f << '\n';
    // }
 
    // if (setlocale(LC_NUMERIC, "de_DE.utf8")) {
    //     std::cout << "With de_DE.utf8 locale:\n";
    //     std::cout << "  '123.45' -> " << std::strtod("123.45", 0) << '\n';
    //     std::cout << "  '123,45' -> " << std::strtod("123,45", 0) << '\n';
    // }
}