/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:21:46 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/22 16:05:19 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB();
		HumanB(std::string new_name);
		~HumanB();

		void		setWeapon(Weapon &new_weapon);
		void		attack();
};

#endif
