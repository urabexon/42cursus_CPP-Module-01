/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 22:38:39 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 23:06:52 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name); // コンストラクタ
		~HumanB(); // デストラクタ
		void	setWeapon(Weapon &weapon);
		void	attack(void) const;
		
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif