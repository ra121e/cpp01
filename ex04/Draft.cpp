/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Draft.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:02:49 by athonda           #+#    #+#             */
/*   Updated: 2025/04/25 13:14:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Draft.hpp"

Draft::Draft(const std::string &filename, std::string &s1, std::string &s2) :
	_filename(filename),
	_si(s1),
	_s2(s2)
{}

Draft::~Draft()
{}

bool	Draft::replace()
{
	return (true);
}

bool	Draft::display()
{
	std::ifstream infile(_filename.c_str());
	if (!infile.is_open())
		return (false);

	std::string	line;
	while (std::getline(infile, line))
		std::cout << line << std::endl;

	infile.close();
	return (true);
}