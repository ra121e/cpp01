/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:39:39 by athonda           #+#    #+#             */
/*   Updated: 2025/04/22 17:22:51 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <new>
#include <string>
#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie("stackman");
	zombie.announce();

	void	*tmp = operator new(sizeof(Zombie));
	new (tmp) Zombie("heapman");
	Zombie	*heapman = static_cast<Zombie*>(tmp);
	heapman->announce();

	Zombie	*ptr = static_cast<Zombie*>(operator new(sizeof(Zombie)));
	new (ptr) Zombie("castman");
	ptr->announce();

	int	numberZombie = 5;
	std::cout << "create zombies " << numberZombie << std::endl;

	Zombie* horde = zombieHorde(numberZombie, "team ZOMBIE");
	std::cout << "here are the team ZOMBIE!!" << std::endl;
	for (int i = 0; i < numberZombie; ++i)
	{
		std::cout << "number " << i + 1 << ":";
		horde[i].announce();
	}
	return (0);
}