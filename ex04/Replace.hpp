/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:36:12 by athonda           #+#    #+#             */
/*   Updated: 2025/04/23 17:54:38 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>

class Replace
{
public:
	Replace(const std::string &filename);
	~Replace();
	bool	display();

private:
	std::string _filename;
};


#endif