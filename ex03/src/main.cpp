/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:31:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/13 10:18:19 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Rules.hpp"

#include <iostream>

# if MORE_CLASSES == 1
	int main()
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Earth());
		src->learnMateria(new Fire());
		ICharacter* me = new Character("me");
		(void)me;
		AMateria* tmp;
		(void)tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("earth");
		me->equip(tmp);
		tmp = src->createMateria("fire");
		me->equip(tmp);
		// tmp = src->createMateria("cure");
		// me->equip(tmp);
		// ICharacter* bob = new Character("bob");
		// me->use(0, *bob);
		// me->use(1, *bob);
		
		// delete bob;
		delete me;
		delete src;
		return 0;
	}
# else
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
# endif
// Mandatory
