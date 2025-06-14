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
#include <iostream>

Character::Character()
{
	this->_name = "no_name";
	for (int i = 0; i < MATERIA_MAX; ++i)
        this->_items[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < MATERIA_MAX; ++i)
        this->_items[i] = NULL;
}

Character::Character(const Character& other)
{
	_name = other._name;
	for (int i = 0; i < MATERIA_MAX; ++i)
	{
		if (other._items[i])
			_items[i] = other._items[i]->clone();
		else
			_items[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < MATERIA_MAX; ++i)
	{
		if (_items[i])
			delete _items[i];
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < MATERIA_MAX; ++i)
		{
			if (_items[i])
			{
				delete _items[i];
				_items[i] = NULL;
			}
			if (other._items[i])
				_items[i] = other._items[i]->clone();
		}
	}
	return *this;
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
	for (int index = 0; index < MATERIA_MAX; index++)
	{
		if (this->_items[index] == NULL)
		{
			this->_items[index] = m->clone();
			return;
		}
	}
	if (DEBUG)
		std::cout << "Inventory full, cannot equip materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= MATERIA_MAX || idx < 0)
	{
		std::cout << "Erreur: idx doit être compris entre 0 et "<< (MATERIA_MAX - 1) << std::endl;
		return ;
	}
	if (DEBUG)
		std::cout << "Materia[" << idx <<"] déséquipé" << std::endl;
	this->_items[idx] = NULL;
}

AMateria* Character::throw_materia(int idx)
{
	if (idx >= MATERIA_MAX || idx < 0)
	{
		std::cout << "Erreur: idx doit être compris entre 0 et "<< (MATERIA_MAX - 1) << std::endl;
		return (NULL);
	}
	if (DEBUG)
		std::cout << "Materia[" << idx <<"] jeté au sol" << std::endl;
	if (this->_items[idx] == NULL && DEBUG)
		std::cout << "Materia[" << idx <<"] not found" << std::endl;
	return (this->_items[idx]);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= MATERIA_MAX || idx < 0)
	{
		std::cout << "Erreur: idx doit être compris entre 0 et "<< (MATERIA_MAX - 1) << std::endl;
		return ;
	}
	if (this->_items[idx] == NULL)
	{
		std::cout << "Erreur: materia[" << idx << "] pas encore équipé " << std::endl;
		return;
	}
	this->_items[idx]->use(target);
}
