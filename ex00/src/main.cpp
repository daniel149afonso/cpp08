/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:15:16 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/20 13:54:43 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

void testing_vector()
{
	std::cout << "\n\n### TESTING VECTOR ###\n\n" << std::endl;

	std::vector<int> v;
	v.push_back(12);
	v.push_back(1);
	try
	{
		std::vector<int>::iterator it = easyfind(v, 12);
		if (it != v.end())
			std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void testing_list()
{
	std::cout << "\n\n### TESTING list ###\n\n" << std::endl;

	std::list<int> v;
	v.push_back(12);
	v.push_back(1);
	try
	{
		std::list<int>::iterator it = easyfind(v, 12);
		if (it != v.end())
			std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	testing_vector();
	return 0;
}
