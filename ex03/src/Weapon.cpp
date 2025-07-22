/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:31:59 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/22 16:03:00 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string new_type)
{
	type = new_type;
}

Weapon::~Weapon()
{}

const std::string	&Weapon::getType()
{
	return (type);
}

void	Weapon::setType(const std::string &new_type)
{
	type = new_type;
}
