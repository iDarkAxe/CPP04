/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 16:24:57 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	;
}

WrongCat::WrongCat(const WrongCat &f)
{
	*this = f;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

const std::string WrongCat::getType() const
{
	return (this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat goes \"bip bip Miaoow Meooew\"" << std::endl;
}
