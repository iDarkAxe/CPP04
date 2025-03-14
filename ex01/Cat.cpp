/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 15:58:19 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &f)
{
	// std::cout << "Cat Copy Constructor" << std::endl;
	*this = f;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

const std::string Cat::getType() const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "Cat goes \"Miaoow Meooew\"" << std::endl;
}

Brain *Cat::getThoughts()
{
	return (this->_brain);
}

void Cat::getThoughtsFrom(Brain *brain)
{
	*this->_brain = *brain;
}
