/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:50:32 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/12 09:22:57 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

template <typename T> class Array {
	private:
		T *myArr;
		unsigned int len;

	public:
		Array() {
			myArr = new T[0];
			len = 0;
		}
		~Array() {
			delete [] myArr;
		}
		Array(unsigned int a) {
			myArr = new T[a];
			len = a;
		}
		Array(const Array& copy)
		{
			len = copy.len;
			myArr = new T[len];
			for (unsigned int i = 0; i < len; i++)
				myArr[i] = copy.myArr[i];
		}
		Array & operator = (const Array& copy) {
			if (this != &copy) {
				delete [] myArr;
				len = copy.len;
				myArr = new T[len];
				for (unsigned int i = 0; i < len; i++)
					myArr[i] = copy.myArr[i];
			}
			return *this;
		}
		T & operator[](unsigned int i) {
			if (i >= len)
				throw (std::invalid_argument("Can't access this block of memory"));
			return myArr[i];
		}
		unsigned int size() const {
			return len;
		}
};