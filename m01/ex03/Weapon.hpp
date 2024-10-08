/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:48:07 by ibaby             #+#    #+#             */
/*   Updated: 2024/09/30 18:20:09 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
	public:
		std::string &getType( void );
		void		setType( std::string new_type );
		Weapon( std::string type );
		~Weapon();
	private:
		std::string type;
};

#endif