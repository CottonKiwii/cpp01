/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:16:08 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/01 01:12:32 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;

	horde = zombieHorde(4, "Makoto");
	std::cout << "*===========* ANNOUNCE *===========*" << std::endl;
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	std::cout << "*==========* DESTRUCTOR *==========*" << std::endl;
	delete [] horde;		

	std::cout << "\n";

	horde = zombieHorde(2, "Kotone");
	std::cout << "*===========* ANNOUNCE *============*" << std::endl;
	for (int i = 0; i < 2; i++)
		horde[i].announce();
	std::cout << "*==========* DESTRUCTOR *===========*" << std::endl;
	delete [] horde;		
}
