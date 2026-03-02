/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:15:16 by danielafons       #+#    #+#             */
/*   Updated: 2026/03/02 12:43:03 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

void testing_span()
{
	std::cout << "\n\n### TESTING SPAN ###\n\n" << std::endl;

	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void testing_big_span()
{
	std::cout << "\n\n### TESTING SPAN 10'000 NUMBERS ###\n\n" << std::endl;

	Span sp = Span(10000);
	try
	{
		for (int i = 0; i < 10000; i++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void testing_range_iterators()
{
	std::cout << "\n\n### TESTING RANGE ITERATORS ###\n\n" << std::endl;

	Span sp = Span(9);
	try
	{
		Span sp(10);

		std::vector<int> numbers;
		numbers.push_back(5);
		numbers.push_back(8);
		numbers.push_back(12);

		sp.add_range_iterators(numbers.begin(), numbers.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void spanIsFull()
{
	std::cout << "\n\n### TESTING FULL SPAN ###\n\n" << std::endl;

	Span sp = Span(1);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void spanNotFound()
{
	std::cout << "\n\n### TESTING SPAN NOT FOUND ###\n\n" << std::endl;

	Span sp = Span(1);
	try
	{
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	testing_span();
	testing_big_span();
	testing_range_iterators();
	spanIsFull();
	spanNotFound();
	return 0;
}