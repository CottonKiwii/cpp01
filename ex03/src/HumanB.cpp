/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:42:48 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/22 16:48:39 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{}

HumanB::HumanB(std::string new_name)
{
	name = new_name;
}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}

void	HumanB::attack()
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon->getType() << std::endl;
}
