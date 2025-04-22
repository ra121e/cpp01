/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:01:15 by athonda           #+#    #+#             */
/*   Updated: 2025/04/22 17:28:26 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;

	Zombie* zombies = static_cast<Zombie*>(operator new[](sizeof(Zombie)*N));
	for (int i = 0; i < N; ++i)
	{
		new (&zombies[i]) Zombie;
		zombies[i].setName(name);
	}

	return (zombies);
}