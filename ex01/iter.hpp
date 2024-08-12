/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:33:42 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/12 09:30:46 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iterFn(T &a) {
	std::cout << a << std::endl;
}

template <typename T> void iter(const T *arr, unsigned int len, void (*f)(const T&)) {
	for (int i = 0; i < len; i++)
		f(arr[i]);
}