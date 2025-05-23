/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Draft.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:02:49 by athonda           #+#    #+#             */
/*   Updated: 2025/04/25 18:11:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Draft.hpp"

Draft::Draft(const std::string &filename, std::string &s1, std::string &s2) :
	_filename(filename),
	_s1(s1),
	_s2(s2),
	_content("")
{}

Draft::~Draft()
{}

bool	Draft::readFile()
{
	std::ifstream infile(_filename.c_str());
	if (!infile.is_open())
		return (false);

	std::string	line;
	while (std::getline(infile, line))
	{
		_content += line + "\n";
	}

	infile.close();
	return (true);
}

void	Draft::replaceWord()
{
	std::string	result = "";
	std::size_t	pos = 0;
	while ((pos =_content.find(_s1, pos)) != std::string::npos)
	{
		_content.erase(pos, _s1.length());
		_content.insert(pos, _s2);
		pos += _s2.length();
	}
}

bool	Draft::writeFile()
{
	std::string	outfilename = _filename + ".replace";
	std::ofstream outfile(outfilename.c_str());
	if (!outfile.is_open())
		return (false);
	outfile << _content;
	outfile.close();
	return (true);
}


bool	Draft::replace()
{
	if (!readFile())
		return (false);
	replaceWord();
//	display();
	if (!writeFile())
		return (false);
	return (true);
}

void	Draft::display()
{
	std::cout << _content;
}