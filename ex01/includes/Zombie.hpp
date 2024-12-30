/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:09:01 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 21:39:40 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie(); // コンストラクタ
		~Zombie(); // デストラクタ
		void	set_name(std::string name);
		void	announce(void);

	private:
		std::string _name; // ゾンビの名前を格納する
};

// N体のZombieを作成し、最初のZombieへのポインタを返す
Zombie*	zombieHorde(int N, std::string name);

#endif
