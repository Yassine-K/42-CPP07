/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:33:33 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 17:45:45 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int a1[4] = {5, 9, 6, 1};
	char a2[4] = {'a', '9', '*', 'c'};
	std::string a3[4] = {"Yassine", "1337", "test", "vroom"};

	::iter(a1, 4, ::iterFn);
	::iter(a2, 4, ::iterFn);
	::iter(a3, 4, ::iterFn);
	return 0;
}