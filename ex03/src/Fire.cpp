/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:05:34 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/14 14:21:06 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"
#include "Rules.hpp"
#include <iostream>

# if MORE_CLASSES == 1
Fire::Fire(const Fire &f) : AMateria("fire")
{
	*this = f;
}

Fire &Fire::operator=(const Fire &other)
{
	this->_type = other._type;
	return (*this);
}

const std::string &Fire::getType() const
{
	return (this->_type);
}

Fire* Fire::clone() const
{
	Fire *element;
	
	element = new Fire();
	return (element);
}

void Fire::use(ICharacter& target)
{
	std::cout << "* shoots an fireball at " << target.getName() << " *" << std::endl;
}

#endif
