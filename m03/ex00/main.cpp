/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:19:47 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/06 01:39:00 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap jean ("Idrissa");

	jean.attack("Mohammed");
	jean.take(10);
	jean.beRepaired(5);
	return 0;
}