/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:31:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/14 13:57:18 by ppontet          ###   ########lyon.fr   */
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

#if MORE_CLASSES == 1
# include "Earth.hpp"
# include "Fire.hpp"
#endif

# if MORE_CLASSES == 0
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
#else
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Earth());
	src->learnMateria(new Fire());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	// IDX == 0
	me->equip(tmp);
	
	tmp = src->createMateria("cure");
	// IDX == 1
	me->equip(tmp);
	
	tmp = src->createMateria("earth");
	// IDX == 2
	me->equip(tmp);
	
	tmp = src->createMateria("fire");
	// IDX == 3
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	
	std::cout << std::endl;
	
	ICharacter* martin = me;
	martin->use(0, *me);
	martin->use(1, *me);
	martin->use(2, *me);
	martin->use(3, *me);

	std::cout << std::endl;

	// IDX 2 was earth
	Character *realChar = dynamic_cast<Character*>(me);
	if (realChar)
	{
		tmp = realChar->throw_materia(2);
		delete tmp;
	}
	else
	{
		std::cout << "Cast failed: me is not a Character*" << std::endl;
		std::cout << "IDX 2 will not be accessible, leak." << std::endl;
	}
	me->unequip(2);
	me->use(2, *bob);
	tmp = src->createMateria("earth");
	// IDX == 2
	me->equip(tmp);
	me->use(2, *bob);

	// ERROR SECTION //
	bob->use(0, *me);
	bob->use(1, *me);
	bob->use(2, *me);
	bob->use(3, *me);
	bob->use(4, *me);
	
	tmp = src->createMateria("thunder");
	src->learnMateria(new Fire());

	delete bob;
	delete me;
	delete src;
	return 0;
}
# endif
