/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:43:07 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 20:06:04 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// コンストラクタ
Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << name << ": is born !!" << std::endl;	
}

// デストラクタ
Zombie::~Zombie() {
	std::cout << _name << ": is dead !!" << std::endl;
}

// メンバ関数
void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ…" << std::endl;
}
