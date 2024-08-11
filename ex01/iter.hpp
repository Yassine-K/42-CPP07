/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:33:42 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 17:45:34 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/_types/_size_t.h>

template <typename T> void iterFn(T a) {
	std::cout << a << std::endl;
}

template <typename T> void iter(T *arr, int len, void (*f)(T)) {
	for (int i = 0; i < len; i++)
		f(arr[i]);
}