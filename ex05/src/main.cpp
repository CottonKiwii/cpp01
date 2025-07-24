/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:12:49 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/24 16:42:47 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;

	std::cout << "DEBUG:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "INFO:" << std::endl;
	harl.complain("INFO");

	std::cout << "WARNING:" << std::endl;
	harl.complain("WARNING");

	std::cout << "ERROR:" << std::endl;
	harl.complain("ERROR");

	std::cout << "INVALID INPUT:" << std::endl;
	harl.complain("KOTONE4LIFE");
}
