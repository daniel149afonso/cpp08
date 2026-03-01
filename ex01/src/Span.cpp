/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:56:27 by daniel149af       #+#    #+#             */
/*   Updated: 2026/02/28 16:47:22 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

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
	if (static_cast<unsigned int>(_v.size()) != _N)
		_v.push_back(nb);
	else
		throw SpanIsFull();
	
}

int Span::shortestSpan()
{
	if (_v.size() < 2)
		throw SpanNotFound();

	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	int shortSpan = tmp[1] - tmp[0];

	for (size_t i = 2; i < tmp.size(); i++)
	{
		int diff = tmp[i] - tmp[i - 1];
		if (diff < shortSpan)
			shortSpan = diff;
		if (shortSpan == 0)
			break;
	}
	return shortSpan;
}

int Span::longestSpan()
{
	if (_v.size() < 2)
		throw SpanNotFound();

	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	int shortSpan = tmp[1] - tmp[0];

	for (size_t i = 2; i < tmp.size(); i++)
	{
		int diff = tmp[i] - tmp[i - 1];
		if (diff > shortSpan)
			shortSpan = diff;
		if (shortSpan == 0)
			break;
	}
	return shortSpan;
}

const char* Span::SpanIsFull::what() const throw()
{
	return ("Error: Span is full.");
}

const char* Span::SpanNotFound::what() const throw()
{
	return ("Error: Span not found.");
}

void Span::print_debug()
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}