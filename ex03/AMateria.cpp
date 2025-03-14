/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/14 13:39:00 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "default";
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Default Destructor" << std::endl;
}

AMateria::AMateria(const AMateria &f)
{
	*this = f;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->type = other.type;
	return (*this);
}

const std::string AMateria::getType() const
{
	return (this->type);
}

void AMateria::makeSound() const
{
	std::cout << "AMateria doesn't make sounds" << std::endl;
}
