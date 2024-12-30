/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 22:38:36 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 23:00:53 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon); // コンストラクタ
		~HumanA(); // デストラクタ
		void	attack(void) const;

	private:
		std::string _name;
		Weapon &_weapon;
};

#endif