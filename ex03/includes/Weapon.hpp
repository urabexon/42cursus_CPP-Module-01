/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 22:38:41 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 22:53:27 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon(); // コンストラクタ
		~Weapon(); // デストラクタ
		std::string const &getType(void) const;
		void	setType(std::string type);

	private:
		std::string _type;
};

#endif
