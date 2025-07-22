/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:21:15 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/22 16:08:34 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;

	public:
		HumanA();
		HumanA(std::string new_name, Weapon &new_weapon);
		~HumanA();

		void		attack();
};

#endif
