/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:52:56 by jwolfram          #+#    #+#             */
/*   Updated: 2025/07/31 22:37:08 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	getNewLine(std::string line, std::string s1, std::string s2)
{
	int				index;

	while (line.find(s1) != std::string::npos)
	{
		index = line.find(s1);
		line.erase(index, s1.length());
		line.insert(index, s2);
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Invalid Amount of Parameters" << std::endl, 1);	

	std::ifstream	file(argv[1]);
	if (!file.is_open())
		return (std::cerr << "Error Opening the File" << std::endl, 1);
	std::ofstream	fileReplace((std::string(argv[1]) + ".replace").c_str());

	std::string		line;
	while (std::getline(file, line))
	{
		if (!file.eof())
			fileReplace << getNewLine(line + "\n", argv[2], argv[3]);
		else
			fileReplace << getNewLine(line, argv[2], argv[3]);
	}
	file.close();
	fileReplace.close();
}
