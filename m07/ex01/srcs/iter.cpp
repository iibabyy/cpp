/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:41:57 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/28 22:56:21 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

template <typename T>
void	iter(T *array, size_t size, void (*f)(T&)) {
	for (int i = 0; i < size; i++) {
		f(array[i]);
	}
}