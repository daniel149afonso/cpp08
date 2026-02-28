/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:16:41 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/27 15:33:36 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <set>

class Span
{
	private:
		unsigned int _N;
		std::set<int> set;
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
		class SpanIsFull: public std::exception{
			const char * what() const throw();
		};
		class SpanNotFound: public std::exception{
			const char * what() const throw();
		};
};



























// GROS RACISTE DE MERDE
