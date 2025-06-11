/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/11 17:02:15 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <cstddef>

MateriaSource::MateriaSource()
{
	this->_amateria = NULL;
	this->_next = NULL;
}

MateriaSource::~MateriaSource()
{
	MateriaSource *temp;
	MateriaSource *next;
	
	if (this->_amateria != NULL)
	{
		temp = this->_next;
		delete this->_amateria;
		while (temp != NULL)
		{
			next = temp->_next;
			delete temp->_amateria;
			delete temp;
			temp = next;
		}
		delete temp;

	}
}

void MateriaSource::learnMateria(AMateria *material)
{
	MateriaSource *temp;

	if (this->_amateria != NULL)
	{
		temp = this->_next;
		while (temp != NULL)
		{
			if (temp->_next == NULL)
				break;
			temp = temp->_next;
		}
		if (temp == NULL)
			temp = new MateriaSource;
		temp->_amateria = material;
	}
	else
	{
		this->_amateria = material;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	MateriaSource *temp;

	if (this->_amateria == NULL)
		return (NULL);
	if (this->_amateria != NULL)
	{
		temp = this->_next;
		while (temp != NULL && temp->_amateria && temp->_amateria->getType() != type)
		{
			temp = temp->_next;
		}
		return (temp->_amateria);
	}
	else
	{
		return (this->_amateria);
	}
}
