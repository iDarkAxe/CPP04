/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/11 16:12:26 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = "default";
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Default Destructor" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &f)
{
	*this = f;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->_type = other._type;
	return (*this);
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria used on " << target.getName() << " *" << std::endl;
}


// void AMateria::makeSound() const
// {
// 	std::cout << "AMateria doesn't make sounds" << std::endl;
// }
