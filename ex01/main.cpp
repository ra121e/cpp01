/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:39:39 by athonda           #+#    #+#             */
/*   Updated: 2025/04/22 16:33:56 by athonda          ###   ########.fr       */
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

	return (0);
}