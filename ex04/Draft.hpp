/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Draft.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:46:20 by athonda           #+#    #+#             */
/*   Updated: 2025/04/25 17:34:13 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAFT_HPP
# define DRAFT_HPP

# include <string>

class Draft
{
public:
	Draft(const std::string &filename, std::string &s1, std::string &s2);
	~Draft();
	bool	replace();

private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
	std::string	_content;

	bool	readFile();
	void	replaceWord();
	void	writeFile();
	void	display();
};

#endif