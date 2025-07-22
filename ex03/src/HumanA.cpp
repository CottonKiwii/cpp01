/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:37:51 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/22 16:07:53 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon): weapon(new_weapon), name(new_name)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}
