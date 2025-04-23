/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:54:58 by athonda           #+#    #+#             */
/*   Updated: 2025/04/23 18:01:02 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Replace.hpp"

Replace::Replace(const std::string &filename) :
	_filename(filename)
{}

Replace::~Replace()
{}

bool	Replace::display()
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