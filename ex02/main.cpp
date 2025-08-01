/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:01:19 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/01 01:22:51 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";	
	std::string *stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "*==========*  STRING   *==========*" << std::endl;
	std::cout << &string << std::endl;
	std::cout << "*==========*  POINTER  *==========*" << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << "*==========* REFERENCE *==========*" << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "\n";

	std::cout << "*==========*  STRING   *==========*" << std::endl;
	std::cout << string << std::endl;
	std::cout << "*==========*  POINTER  *==========*" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "*==========* REFERENCE *==========*" << std::endl;
	std::cout << stringREF << std::endl;
}
