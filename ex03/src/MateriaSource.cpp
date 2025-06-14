/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/14 14:20:38 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Rules.hpp"
#include <cstddef>
#include <iostream>

MateriaSource::MateriaSource()
{
	this->_amateria = NULL;
	this->_next = NULL;
}

// Delete _next va supprimer récursivement la liste chainée
MateriaSource::~MateriaSource()
{
	delete _amateria;
    delete _next;
}

void MateriaSource::learnMateria(AMateria *material)
{
    MateriaSource* temp = this;
    int index;

	if (material == NULL)
	{
        std::cout << "Erreur: Can't learn NULL materia" << std::endl;
		return;
	}
    index = 0;
    while (temp->_next != NULL && index < (MATERIA_MAX - 1)) 
	{
        index++;
        temp = temp->_next;
    }
    if (index >= (MATERIA_MAX - 1))
    {
        std::cout << "Erreur: trop de materia à apprendre" << std::endl;
        delete material;
        return;
    }
    if (temp->_amateria == NULL)
        temp->_amateria = material;
    else
	{
        temp->_next = new MateriaSource;
        temp->_next->_amateria = material;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	MateriaSource* temp = this;
    int index;

    index = 0;
    while (temp != NULL && index <= (MATERIA_MAX - 1))
    {
        
        if (temp->_amateria && temp->_amateria->getType() == type)
            return temp->_amateria;
        index++;
        temp = temp->_next;
    }
    if (!temp || index >= (MATERIA_MAX - 1))
    {
        std::cout << "Erreur: materia '" << type << "' non trouvé" << std::endl;
        return (NULL);
    }
    return NULL;
}
