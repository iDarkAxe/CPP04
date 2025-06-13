/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/06/11 16:52:17 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	;
}

Ice::~Ice()
{
	// std::cout << "Ice Default Destructor" << std::endl;
}

Ice* Ice::clone() const
{
	Ice *element;
	
	element = new Ice();
	return (element);
}
