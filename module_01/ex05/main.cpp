/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:27:19 by jekim             #+#    #+#             */
/*   Updated: 2022/02/19 01:52:42 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Karen Karen;
		std::string keyword(argv[1]);
		
		Karen.complain(keyword);
	}
	return 0;
}