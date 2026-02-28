/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:56:27 by daniel149af       #+#    #+#             */
/*   Updated: 2026/02/27 15:46:23 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0)
{

}

Span::Span(unsigned int N): _N(N)
{
	
}

Span::Span(const Span& other)
{
	_N = other._N;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
		_N = other._N;
	return *this;
}

Span::~Span()
{

}

void Span::addNumber(int nb)
{
	
}

int Span::shortestSpan()
{
	
}

// int Span::longestSpan()
// {
	
// }

const char* Span::SpanIsFull::what() const throw()
{
	return ("Error: Span is full.");
}

const char* Span::SpanNotFound::what() const throw()
{
	return ("Error: Span not found.");
}