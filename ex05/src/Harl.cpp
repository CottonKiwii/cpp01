/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:12:08 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/31 22:39:39 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout <<
		"I love Kotone Shiomi, one of the main characters in Persona 3 Portable!"
		<< std::endl;
}

void	Harl::info()
{
	std::cout <<
		"I cannot believe the remake Persona 3 Reload doesn't include Kotone!"
		<< std::endl;
}

void	Harl::warning()
{
	std::cout <<
		"I think us Kotone fans deserve to have her in the game! We've been loyal for years!"
		<< std::endl;
}

void	Harl::error()
{
	std::cout <<
		"This is unacceptable! I will refund the game right now!"
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	int			lvl = 0;
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func		func_arr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (lvl < 4 && level != arr[lvl])	
		lvl++;
	if (lvl == 4)
	{
		std::cout << "No Complaints Found" << std::endl;
		return ;
	}
	(this->*func_arr[lvl])();
}

