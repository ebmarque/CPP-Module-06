/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:07:34 by ebmarque          #+#    #+#             */
/*   Updated: 2024/06/12 18:53:25 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <exception>
# include <cctype>
# include <limits>
# include <string>
# include <cstdlib>

#define RESET = "\033[0m"
#define BLACK = "\033[30m"
#define RED = "\033[31m"
#define GREEN = "\033[32m"
#define YELLOW = "\033[33m"
#define BLUE = "\033[34m"
#define MAGENTA = "\033[35m"
#define CYAN = "\033[36m"


typedef enum {

	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	P_INFF,
	N_INFF,
	NANF,
	P_INF,
	N_INF,
	NAN,
	INVALID
} TYPE;

class ScalarConverter 
{
	private:

/*--------------------------------- CANONICAL ---------------------------------*/

		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

/*-----------------------------------------------------------------------------*/

	public:

		static void convert(std::string str);

	class ImpossibleConversion : public std::exception {
		virtual const char* what() const throw() {
			return ("Impossible conversion exception");
		}
	};
};


#endif // SCALARCONVERTER_HPP