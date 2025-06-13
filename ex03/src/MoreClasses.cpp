/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MoreClasses.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:05:34 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/13 22:46:34 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Rules.hpp"

# if MORE_CLASSES == 1
Earth* Earth::clone() const
{
	Earth *element;
	
	element = new Earth();
	return (element);
}

void Earth::use(ICharacter& target)
{
	std::cout << "* digs a hole below " << target.getName() << " *" << std::endl;
}

void Fire::use(ICharacter& target)
{
	std::cout << "* shoots an fireball at " << target.getName() << " *" << std::endl;
}

Fire* Fire::clone() const
{
	Fire *element;
	
	element = new Fire();
	return (element);
}
#endif
