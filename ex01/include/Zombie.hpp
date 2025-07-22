/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:08:47 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/22 15:31:20 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		Zombie(std::string new_name);

		void		set_name(std::string new_name);
		void		announce();
};

Zombie	*zombieHorde(int n, std::string name);

#endif
