/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:36:17 by hurabe            #+#    #+#             */
/*   Updated: 2024/12/30 22:30:19 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string s = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << "String variable's address: " << &s << std::endl;
	std::cout << "stringPTR's address: " << stringPTR << std::endl;
	std::cout << "stringREF's address: " << &stringREF << std::endl;
	std::cout << "the string variable's value: " << s << std::endl;
	std::cout << "stringPTR's value: " << *stringPTR << std::endl;
	std::cout << "stringREF's value: " << stringREF << std::endl;
	return 0;
}
