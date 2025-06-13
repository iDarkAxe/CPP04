/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/11 16:12:26 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Rules.hpp"

Character::Character()
{
	this->_name = "no_name";
}

Character::Character(std::string name)
{
	this->_name = name;
}

Character::~Character()
{
	// std::cout << "Character Default Destructor" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Can't equip NULL materia" << std::endl;
		return;
	}
	if (DEBUG)
			std::cout << "Materia " << m->getType() <<" équipé" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Erreur: idx doit être compris entre 0 et "<< (MATERIA_MAX - 1) << std::endl;
		return ;
	}
	std::cout << "Materia[" << idx <<" déséquipé" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    int index;

    index = 0;
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Erreur: idx doit être compris entre 0 et "<< (MATERIA_MAX - 1) << std::endl;
		return ;
	}
	(void)target;
	// this._items[idx].use
	// while (temp != NULL && index < 3)
	// {
	//     if (index >= 3)
	//     {
	//         std::cout << "Erreur: trop de materia équipés" << std::endl;
	//         return (NULL);
	//     }
	//     if (temp->_amateria && temp->_amateria->getType() == type)
	//         return temp->_amateria;
	//     index++;
	//     temp = temp->_next;
	// }
}
