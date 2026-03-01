/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:16:41 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/28 14:31:08 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		//public methods
		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();
		void print_debug();
	
		//Exceptions
		class SpanIsFull: public std::exception{
			const char * what() const throw();
		};
		class SpanNotFound: public std::exception{
			const char * what() const throw();
		};
};



























// GROS RACISTE DE MERDE
