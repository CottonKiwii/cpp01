/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:16:08 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/01 01:19:20 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie zombie;
	Zombie *maya;
	
	std::cout << "*==========*   ANNOUNCE   *==========*" << std::endl;
	zombie.announce();
	std::cout << "\n";

	std::cout << "*==========*  NEW ZOMBIE  *==========*" << std::endl;
	maya = newZombie("Maya");
	maya->announce();
	delete maya;
	std::cout << "\n";

	std::cout << "*==========* RANDOM CHUMP *==========*" << std::endl;
	randomChump("Tatsuya");
	std::cout << "\n";
}
