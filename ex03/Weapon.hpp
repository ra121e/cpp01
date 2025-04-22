/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:43:41 by athonda           #+#    #+#             */
/*   Updated: 2025/04/23 00:29:58 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
	Weapon(std::string s);
	~Weapon();
	void		setType(std::string type);
	std::string	getType(void);
private:
	std::string	type;
};

#endif