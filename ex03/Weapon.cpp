/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:51:09 by athonda           #+#    #+#             */
/*   Updated: 2025/04/23 00:29:26 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string s):
	type(s)
{}

Weapon::~Weapon()
{}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}