/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:50:32 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/11 17:53:17 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T> class Array {
	private:
		T *myArr;

	public:
		Array();
		Array(unsigned int);
		Array(const Array &);
		Array & operator = (const Array &);
		int size() const;
};