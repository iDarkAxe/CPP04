/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Earth.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:05:34 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/14 14:21:08 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Earth.hpp"
#include "Rules.hpp"
#include <iostream>

# if MORE_CLASSES == 1
Earth::Earth(const Earth &f) : AMateria("earth")
{
	*this = f;
}

Earth &Earth::operator=(const Earth &other)
{
	this->_type = other._type;
	return (*this);
}

Earth* Earth::clone() const
{
	Earth *element;
	
	element = new Earth();
	return (element);
}

void Earth::use(ICharacter& target)
{
	std::cout << "* digs a hole below " << target.getName() << " *" << std::endl;
}

const std::string &Earth::getType() const
{
	return (this->_type);
}

#endif
