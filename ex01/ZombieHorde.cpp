/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:01:15 by athonda           #+#    #+#             */
/*   Updated: 2025/04/30 22:46:46 by athonda          ###   ########.fr       */
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

Zombie* zombieHordeNew(int N, std::string name)
{
	if (N <= 0)
		return NULL;

	Zombie* zombies = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		zombies[i].setName(name);
	}

	return (zombies);
}