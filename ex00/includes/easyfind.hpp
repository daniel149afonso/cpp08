/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:16:41 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/19 18:06:25 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

template <typename T>
template <typename T> T::iterator easyfind(T& a, int nb)
{
	for (template <typename T> T::iterator it = a.begin(); it != a.end(); it++)
	{
		if (*it == nb)
			return (it);
	}
	return (a.end());
}


























// GROS RACISTE DE MERDE
