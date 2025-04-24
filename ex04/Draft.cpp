/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Draft.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:02:49 by athonda           #+#    #+#             */
/*   Updated: 2025/04/24 18:22:59 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Draft.hpp"

Draft::Draft(const std::string &filename) :
	_filename(filename)
{}

Draft::~Draft()
{}

bool	Draft::display()
{
	std::ifstream infile(this->_filename.c_str());
	if (!infile.is_open())
		return (false);

	std::string	line;
	while (std::getline(infile, line))
		std::cout << line << std::endl;

	infile.close();
	return (true);
}