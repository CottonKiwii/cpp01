/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:16:08 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/31 22:27:42 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;

	horde = zombieHorde(4, "Makoto");
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	delete [] horde;		

	std::cout << "\n";

	horde = zombieHorde(2, "Kotone");
	for (int i = 0; i < 2; i++)
		horde[i].announce();
	delete [] horde;		
}
