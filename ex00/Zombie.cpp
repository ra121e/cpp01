/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 22:44:22 by athonda           #+#    #+#             */
/*   Updated: 2025/04/20 23:12:25 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string s) :
	Zombie::name(s)
{}

Zombie::~Zombie()
{

}

void	Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::
}