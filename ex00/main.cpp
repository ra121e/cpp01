/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:30:56 by athonda           #+#    #+#             */
/*   Updated: 2025/04/29 18:18:06 by athonda          ###   ########.fr       */
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
	std::cout << "Now, we go in the inner block" << std::endl;
	{
		std::cout << "test2 inner block: start" << std::endl;
		Zombie	stack_inner("stack_inner");
		stack_inner.announce();
		stack_outer.announce();
		std::cout << "will get out from inner block" << std::endl;
	}
	std::cout << "Now, we have returned back outer block" << std::endl;
	std::cout << "test3 outer: start" << std::endl;
	stack_outer.announce();

	std::cout << "test4: heap start" << std::endl;
	Zombie	*zombie;
	zombie = newZombie("heapZombie");
	zombie->announce();
	std::cout << "will call delete to delete heapZombie" << std::endl;
	delete zombie;

	std::cout << "test5: randomChump function start" << std::endl;
	randomChump("random");

	std::cout << "Finally, we will get out from main(). Bye" << std::endl;
}