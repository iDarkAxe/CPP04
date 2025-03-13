/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:09:36 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 16:10:03 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::~Dog()
{
	;
}

Dog::Dog(const Dog &f)
{
	*this = f;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

const std::string Dog::getType() const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Dog goes \"BaarRkk BarrkKK\"" << std::endl;
}
