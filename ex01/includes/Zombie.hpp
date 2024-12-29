/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:09:01 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/29 22:17:38 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);

	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
