/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:15:16 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/19 18:05:21 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main()
{
	std::vector<int> v;
    int ret = easyfind(v, 1);
	v.push_back(12);
	v.push_back(1);
    std::cout << ret << std::endl;
    return 0;
}


// JE TE VOIS
