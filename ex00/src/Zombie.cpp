/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:16:25 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/01 01:00:42 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Zombie";
}

Zombie::Zombie(std::string new_name)
{
	name = new_name;
}

Zombie::~Zombie()
{
	std::cout << Zombie::name << " decided to go to sleep..." << std::endl;
}

void	Zombie::announce()
{
	std::cout << Zombie::name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
