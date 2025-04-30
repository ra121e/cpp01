/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:39:39 by athonda           #+#    #+#             */
/*   Updated: 2025/04/30 23:02:55 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <new>
#include <string>
#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Case0: stack zombie" << std::endl;
	Zombie	zombie("stackman");
	zombie.announce();
	std::cout << std::endl;

	std::cout << "Case1: three steps for new: operator new, placement new, static_cast" << std::endl;
	void	*tmp = operator new(sizeof(Zombie));
	new (tmp) Zombie("heapman");
	Zombie	*heapman = static_cast<Zombie*>(tmp);
	heapman->announce();
	heapman->~Zombie();
	operator delete(heapman);
	std::cout << std::endl;

	std::cout << "Case2: malloc like steps for new: operator new with static_cast, placement new" << std::endl;
	Zombie	*ptr = static_cast<Zombie*>(operator new(sizeof(Zombie)));
	new (ptr) Zombie("castman");
	ptr->announce();
	ptr->~Zombie();
	operator delete(ptr);
	std::cout << std::endl;

	std::cout << "Case3: simple formula" << std::endl;
	Zombie	*newman = new Zombie("newman");
	newman->announce();
	newman->~Zombie();
	operator delete(newman);
	std::cout << std::endl;

	int	numberZombie = 5;
	std::cout << "Now, we will create zombies " << numberZombie << std::endl;
	Zombie* team = zombieHorde(numberZombie, "team ZOMBIE");
	std::cout << "Then, the zombies have been created!!" << numberZombie << std::endl;
	std::cout << std::endl;
	std::cout << "Here is the Team ZOMBIE!!" << std::endl;
	for (int i = 0; i < numberZombie; ++i)
	{
		std::cout << "number " << i + 1 << ":";
		team[i].announce();
	}
	std::cout << std::endl;
	for (int i = 0; i < numberZombie; ++i)
	{
		team[i].~Zombie();
	}
	std::cout << std::endl;
	operator delete[](team);

	numberZombie = 5;
	std::cout << "[after Eval]we will create zombies by new" << numberZombie << std::endl;
	Zombie* teamnew = zombieHordeNew(numberZombie, "team NEWZOMBIE");
	std::cout << "Then, the zombies have been created!!" << numberZombie << std::endl;
	std::cout << std::endl;
	std::cout << "Here is the Team NEWZOMBIE!!" << std::endl;
	for (int i = 0; i < numberZombie; ++i)
	{
		std::cout << "number " << i + 1 << ":";
		teamnew[i].announce();
	}
	std::cout << std::endl;
//	for (int i = 0; i < numberZombie; ++i)
//	{
//		team[i].~Zombie();
//	}
//	std::cout << std::endl;
	delete[](teamnew);
	return (0);
}