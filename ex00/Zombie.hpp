/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:19:30 by athonda           #+#    #+#             */
/*   Updated: 2025/04/29 18:15:31 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
	Zombie(std::string s);
	~Zombie();

	void	announce(void);

private:
	std::string	name;
	Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif