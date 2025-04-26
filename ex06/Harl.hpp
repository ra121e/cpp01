/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:46:06 by athonda           #+#    #+#             */
/*   Updated: 2025/04/26 11:26:00 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>


class Harl
{
public:
	Harl();
	~Harl();
	void	complain(std::string level);

private:
	struct s_table
	{
		std::string	key;
		void (Harl::*func)(void);
	};
	static struct s_table	table[4];

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif