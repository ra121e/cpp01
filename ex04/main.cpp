/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:01:41 by athonda           #+#    #+#             */
/*   Updated: 2025/04/25 13:11:23 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Draft.hpp"

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Invalid input" << std::endl;
		return (1);
	}

	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (s1.empty())
	{
		std::cout << "Invalid input: need s1" << std::endl;
		return (1);
	}

	Draft draft(filename, s1, s2);

	if (!draft.replace())
	{
		std::cerr << "Error: not open file." << std::endl;
		return (1);
	}

	return (0);
}