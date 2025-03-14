/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:36:35 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/14 11:23:56 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	// std::cout << "Brain Default Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor" << std::endl;
}

Brain::Brain(const Brain &f)
{
	// std::cout << "Brain Copy Constructor" << std::endl;
	*this = f;
}

Brain &Brain::operator=(const Brain &other)
{
	// std::cout << "Brain Copy Assignment" << std::endl;
	for (int i = 0; i < NBR_IDEAS; i++)
	{
		this->ideas[i] = other.ideas[i];
		// To verify that it's a DEEP COPY, addresses should differ
		if (DEBUG == 1)
			std::cout << "addr is " << &this->ideas[i] << " and addr is " << &other.ideas[i] << std::endl;
	}
	return (*this);
}

void Brain::think()
{
	std::string str;

	std::cout << "Brain is thinking :" << std::endl;
	for (int i = 0; i < __INT_MAX__; i++)
	{
		if (!getline(std::cin, str) || str.empty())
			break;
		this->ideas[i % NBR_IDEAS] = str;
	}
}

void Brain::talk() const
{
	std::cout << "Brain's thoughts are :" << std::endl;
	for (int i = 0; i < NBR_IDEAS; i++)
	{
		if (this->ideas[i].empty())
			break;
		std::cout << this->ideas[i] << std::endl;
		// To verify that it's a DEEP COPY, addresses should differ
		if (DEBUG == 1)
			std::cout << "addr is " << &this->ideas[i] << std::endl;
	}
}
