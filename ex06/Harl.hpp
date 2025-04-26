/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:46:06 by athonda           #+#    #+#             */
/*   Updated: 2025/04/26 08:38:20 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
public:
	Harl();
	~Harl();

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif