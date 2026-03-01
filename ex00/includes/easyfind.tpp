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
	typename T::iterator it = std::find(a.begin(), a.end(), nb);

	if (it == a.end())
		throw OccurenceNotFound();
	return (it);
}
