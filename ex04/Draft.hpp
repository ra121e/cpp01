/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Draft.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:46:20 by athonda           #+#    #+#             */
/*   Updated: 2025/04/24 18:19:52 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAFT_HPP
# define DRAFT_HPP

# include <string>

class Draft
{
public:
	Draft(const std::string &filename);
	~Draft();
	bool	display();

private:
	std::string _filename;
};

#endif