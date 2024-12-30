/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 22:09:04 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 22:00:37 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int			n = 6;
	std::string name = "zombie";
	Zombie		*horde = zombieHorde(n, name);

	std::cout << "=== Zombie Horde Creation ===" << std::endl;
	for (int i = 0; i < n; i++)
		horde[i].announce();
	std::cout << "=== Zombie Horde Destruction ===" << std::endl;
	delete[] horde;
	return 0;
}

/*

複数のオブジェクトを生成し、それらを配列で管理する方法を学ぶ

■ ヒープ
　・関数のスコープ外でもゾンビを使用する場合、ソンビはヒープ領域で確保する
　・ヒープで作成した場合は、明示的に削除する

■ スタック
　・関数のスコープ内でのみゾンビを使用する場合、ゾンビはスタック領域で確保する
　・スタックで作成した場合は、関数終了時に自動的に削除される
*/
