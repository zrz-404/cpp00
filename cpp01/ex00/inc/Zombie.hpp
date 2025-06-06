/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrz <zrz@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:12:55 by jroseiro          #+#    #+#             */
/*   Updated: 2025/05/27 13:38:58 by zrz              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie { 
	private:
		std::string name;
	public:
		Zombie(std::string name); // Constructor to initialize the name
   		~Zombie();                // Destructor
		
		void announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
