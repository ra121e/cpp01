/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:51:09 by athonda           #+#    #+#             */
/*   Updated: 2025/04/23 14:32:51 by athonda          ###   ########.fr       */
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

std::string const	&Weapon::getType(void)
{
	return (this->type);
}