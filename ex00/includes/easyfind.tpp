/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:56:27 by daniel149af       #+#    #+#             */
/*   Updated: 2026/02/20 13:12:58 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
template <typename T>
typename T::iterator easyfind(T& a, int nb)
{
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
	{
		if (*it == nb)
			return (it);
	}
	throw OccurenceNotFound();
	return (a.end());
}

