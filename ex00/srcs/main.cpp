/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:43:00 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/29 22:00:53 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void) {
	// スタック
	std::cout << "----------Stack Zone----------" << std::endl;
	Zombie zombie1("Zombie1");
	Zombie zombie2("Zombie2");
	zombie1.announce();
	zombie2.announce();
	randomChump("randomChumpZ");
	std::cout << std::endl;
	
	// ヒープ
	std::cout << "----------Heap Zone----------" << std::endl;
	Zombie *zombie3;
	zombie3 = newZombie("Zombie3");
	zombie3->announce();
	delete zombie3;
	return 0;
}
