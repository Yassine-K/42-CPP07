/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:50:15 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/12 09:27:07 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	int f[6] = {'a', 'b', 'c','a', 'b', 'c'};
	try {
		Array<int> a(5);
		Array<int> b;
		for (unsigned int i = 0; i < a.size(); i++)
			a[i] = f[i];
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		b = a;
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
		Array<int> c(b);
		for (unsigned int i = 0; i < c.size(); i++)
			std::cout << c[i] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}