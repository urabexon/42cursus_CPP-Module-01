/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:09:06 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 21:36:46 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// コンストラクタ
Zombie::Zombie() {}

// デストラクタ
Zombie::~Zombie() {
	std::cout << _name << " is destroyed!!" << std::endl;
}

// 名前をセット
void	Zombie::set_name(std::string name) {
	this->_name = name;
}

// メンバ関数
void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
