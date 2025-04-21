/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:30:56 by athonda           #+#    #+#             */
/*   Updated: 2025/04/21 15:08:40 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "test1: start" << std::endl;
	Zombie	stack_outer("stack_outer");
	stack_outer.announce();
	std::cout << "test1: end" << std::endl;
	{
		std::cout << "test inner: start" << std::endl;
		Zombie	stack_inner("stack_inner");
		stack_inner.announce();
		stack_outer.announce();
		std::cout << "test inner: end" << std::endl;
		std::cout << "will get out from block" << std::endl;
	}
	stack_outer.announce();

	std::cout << "test3: start" << std::endl;
	Zombie	*zombie;
	zombie = newZombie("heapZombie");
	zombie->announce();
	delete zombie;
	std::cout << "get out from main()" << std::endl;
}