/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:01:41 by athonda           #+#    #+#             */
/*   Updated: 2025/04/24 18:17:11 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Draft.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Invalid input" << std::endl;
		return (1);
	}

	std::string	filename = av[1];
	Draft draft(filename);
	if (!draft.display())
	{
		std::cerr << "Error: not open file." << std::endl;
		return (1);
	}

	return (0);
}