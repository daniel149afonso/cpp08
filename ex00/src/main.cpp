/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:15:16 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/26 16:19:29 by daniel149af      ###   ########.fr       */
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
	std::cout << "\n\n### TESTING LIST ###\n\n" << std::endl;

	std::list<int> lst;
	lst.push_front(42);
	lst.push_front(12);
	try
	{
		std::list<int>::iterator it = easyfind(lst, 12);
		if (it != lst.end())
			std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void testing_deque()
{
	std::cout << "\n\n### TESTING DEQUE ###\n\n" << std::endl;

	std::deque<int> deque;
	
	deque.push_front(12);
	deque.push_front(44);
	try
	{
		std::deque<int>::iterator it = easyfind(deque, 12);
		if (it != deque.end())
			std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void testing_not_found()
{
	std::cout << "\n\n### TESTING VALUE NOT FOUND ###\n\n" << std::endl;

	std::deque<int> deque;
	
	deque.push_front(0);
	deque.push_front(44);
	try
	{
		std::deque<int>::iterator it = easyfind(deque, 12);
		if (it != deque.end())
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
	testing_list();
	testing_deque();
	testing_not_found();
	return 0;
}
