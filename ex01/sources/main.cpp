/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:48:13 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/13 12:55:08 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"
#include "../includes/Serializer.hpp"

int main(void)
{
	Data	bene;
	std::cout << "Data contained by bene.data: " << bene.data << std::endl;
	std::cout << "Address of (Data)bene: " << &bene << std::endl;

	std::cout << "Serialize method -> Serializer::serialize(&bene): " 
			  << Serializer::serialize(&bene) << std::endl;
	std::cout << "Serialize method -> Serializer::deserialize(Serializer::serialize(bene)): " 
			  << Serializer::deserialize(Serializer::serialize(&bene)) << std::endl;
	

	return (0);
}