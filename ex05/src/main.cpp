/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:12:49 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/01 02:34:47 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;

	std::cout << "*==========*  DEBUG  *==========*" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\n";

	std::cout << "*==========*  INFO   *==========*" << std::endl;
	harl.complain("INFO");
	std::cout << "\n";

	std::cout << "*==========* WARNING *==========*" << std::endl;
	harl.complain("WARNING");
	std::cout << "\n";

	std::cout << "*==========*  ERROR  *==========*" << std::endl;
	harl.complain("ERROR");
	std::cout << "\n";

	std::cout << "*==========* INVALID *==========*" << std::endl;
	harl.complain("KOTONE4LIFE");
	std::cout << "\n";
}
