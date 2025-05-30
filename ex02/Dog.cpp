/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:09:36 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/14 11:32:34 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	// std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	// std::cout << "Dog Default Destructor" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &f)
{
	// std::cout << "Dog Copy Constructor" << std::endl;
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

Brain *Dog::getThoughts()
{
	return (this->_brain);
}

void Dog::getThoughtsFrom(Brain *brain)
{
	*this->_brain = *brain;
}
