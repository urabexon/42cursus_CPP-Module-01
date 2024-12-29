/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:41:13 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/29 20:28:56 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);

	private:
		std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
