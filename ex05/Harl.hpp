/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:29:47 by athonda           #+#    #+#             */
/*   Updated: 2025/04/25 22:27:51 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
public:
	Harl();
	~Harl();
	void	complain(std::string level);

private:
	std::string	key[4];
	void (Harl::*functionPointer[4])(void);

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif