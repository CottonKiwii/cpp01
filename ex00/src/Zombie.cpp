/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:16:25 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/21 13:50:48 by jwolfram         ###   ########.fr       */
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
{}

void	Zombie::announce()
{
	std::cout << Zombie::name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
