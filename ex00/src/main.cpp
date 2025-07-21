/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:16:08 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/21 13:54:44 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie zombie;
	Zombie *maya;
	
	zombie.announce();

	maya = newZombie("Maya");
	maya->announce();
	delete maya;

	randomChump("Tatsuya");
}
