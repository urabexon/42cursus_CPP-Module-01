/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:09:09 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 21:35:45 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ゾンビ軍団を生成する関数
Zombie*	zombieHorde(int N, std::string name){
	Zombie *horde = new Zombie[N];
	// 各ゾンビに名前を設定する
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return horde;
}
