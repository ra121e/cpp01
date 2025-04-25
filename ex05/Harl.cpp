/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:34:33 by athonda           #+#    #+#             */
/*   Updated: 2025/04/25 22:15:46 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	std::string	key[4];
	key[0] = "DEBUG";
	key[1] = "INFO";
	key[2] = "WARNING";
	key[3] = "ERROR";

	void (Harl::*functionPointer[4])(void);
	functionPointer[0] = &Harl::debug;
	functionPointer[1] = &Harl::info;
	functionPointer[2] = &Harl::warning;
	functionPointer[3] = &Harl::error;

	for (int i = 0; i < 4; ++i)
	{
		if (key[i] == level)
		{
			(this->*functionPointer[i])();
			return ;
		}
	}
}

void Harl::debug(void) {
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}