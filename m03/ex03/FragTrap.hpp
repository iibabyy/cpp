/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:49:46 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/21 18:12:52 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& other );

		FragTrap& operator=( const FragTrap& other );

		void	highFivesGuys( void );
};

#endif