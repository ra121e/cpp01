/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:07:50 by athonda           #+#    #+#             */
/*   Updated: 2025/04/23 00:54:14 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void);
private:
	Weapon&		weapon;
	std::string	name;

};

#endif