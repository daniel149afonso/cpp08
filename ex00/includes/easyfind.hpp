/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:16:41 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/19 15:53:42 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
T* easyfind(T& a, int nb)
{
	for (size_t i = 0; i < a.size(); i++)
	{
		if (a[i] == nb)
			return (&a[i]);
	}
	return (NULL);
}