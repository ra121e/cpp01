/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 08:28:41 by athonda           #+#    #+#             */
/*   Updated: 2025/04/26 17:41:51 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

struct Harl::s_table	Harl::table[4] =
{
	{"DEBUG", &Harl::debug},
	{"INFO", &Harl::info},
	{"WARNING", &Harl::warning},
	{"ERROR", &Harl::error}
};

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	int	index = 4;
	for (int i = 0; i < 4; ++i)
	{
		if (this->table[i].key == level)
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			(this->*(table[0].func))();
			// fall through
		case 1:
			(this->*(table[1].func))();
			// fall through
		case 2:
			(this->*(table[2].func))();
			// fall through
		case 3:
			(this->*(table[3].func))();
			break ;
		default:
			std::cout << "out of range" << std::endl;
	}
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}