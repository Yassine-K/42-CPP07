/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:14:20 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 17:16:15 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T> void swap (T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template <typename T> T min(T a, T b) {
	if (a < b)
		return a;
	return b;
}

template <typename T> T max(T a, T b) {
	if (a > b)
		return a;
	return b;
}