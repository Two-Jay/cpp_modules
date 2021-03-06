/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 02:42:50 by jekim             #+#    #+#             */
/*   Updated: 2022/02/28 01:32:08 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    srand((unsigned int)time(NULL));
    
    Base *ptr = generate();
    Base &ref = *ptr;

    identify(ptr);
    identify(ref);
    return 0;
}