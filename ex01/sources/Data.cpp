/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:21:37 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/13 12:48:07 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"

Data::Data() {
	this->data = 42;
}

Data::Data(const Data& other) {	(void)other; }

Data& Data::operator=(const Data& other) 
{
	(void)other;
	return (*this);
}

Data::~Data() {}



