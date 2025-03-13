/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:31:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 18:09:30 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

// Functionning Class
int main()
{
	const Animal* meta = new Animal();
	Dog* j = new Dog();
	Dog* k = new Dog();
	Cat* i = new Cat();
	std::cout << j->getType() << " j" << std::endl;
	std::cout << i->getType() << " i" << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	i->makeSound();
	i->makeSound();
	i->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	j->getThoughts()->think();
	std::cout << "J has thunk so here is his thoughts :" << std::endl;
	j->getThoughts()->talk();
	std::cout << std::endl;
	k->getThoughtsFrom(j->getThoughts());
	std::cout << "K has thunk so here is his thoughts :" << std::endl;
	k->getThoughts()->talk();

	std::cout << std::endl;
	i->getThoughts()->think();
	std::cout << "J has thunk so here is his thoughts :" << std::endl;
	i->getThoughts()->talk();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	return 0;
}
