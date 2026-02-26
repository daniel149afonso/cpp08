/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:16:41 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/26 14:13:23 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <deque>

class OccurenceNotFound: public std::exception{
	const char * what() const throw(){
		return ("Error: occurence not found.");
	}
};

#include "easyfind.tpp"



























// GROS RACISTE DE MERDE
