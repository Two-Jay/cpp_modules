/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:27:19 by jekim             #+#    #+#             */
/*   Updated: 2022/02/18 23:11:39 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	Replacer *replacer;

	if (argc != 4 || non_input_checker(argv) == false)
	{
		std::cout << "Error : arguments error." << std::endl;
		return 0;

	}
	replacer = new Replacer(argv);
	if (replacer->open_pipeline(argv[1]) == false)
	{
		std::cout << "Error : file i/o error." << std::endl;
		return 0;
	}
	replacer->replace();
	replacer->close_pipeline();
	delete replacer;
	return 0;
}	