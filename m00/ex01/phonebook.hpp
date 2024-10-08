/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:12:50 by ibaby             #+#    #+#             */
/*   Updated: 2024/10/07 17:13:04 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstdlib>

#include "contact.hpp"

class PhoneBook {
	public:
		void	add(int index);
		void	search(void);
		void	init();
		~PhoneBook();
		PhoneBook();
	private:
		void	print_repertory(void);
		Contact	repertory[8];
		int		contact_len;
};

#endif