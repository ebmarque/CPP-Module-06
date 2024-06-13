/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:20:20 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/13 12:49:14 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data 
{

	public:
		uintptr_t data;
		Data();
		Data(const Data& other);
		Data& operator=(const Data& other);
		~Data();
};


#endif // DATA_HPP