/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:31:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/14 11:23:46 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

#define NUMBER_OF_ANIMALS 100
#define NUMBER_OF_DOG NUMBER_OF_ANIMALS / 2
#define NUMBER_OF_CAT NUMBER_OF_ANIMALS / 2

int main()
{
	Animal *array[NUMBER_OF_ANIMALS];

	for (int i = 0; i < NUMBER_OF_ANIMALS / 2; i++)
	{
		array[i] = new Dog();
		array[NUMBER_OF_ANIMALS - i - 1] = new Cat();
	}

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		std::cout << "Animal[" << i << "] is " << array[i]->getType() << std::endl;
	}

	for (int i = 0; i < NUMBER_OF_ANIMALS / 2; i++)
	{
		// Make the dogs bark
		std::cout << "Animal[" << i << "] : ";
		array[i]->makeSound();
		// Make the cat mewow
		std::cout << "Animal[" << NUMBER_OF_ANIMALS - i - 1 << "] : ";
		array[NUMBER_OF_ANIMALS - i - 1]->makeSound();
	}
	
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete array[i];
	return 0;
}

// Simple Tests
// int main()
// {
// 	const Animal* meta = new Animal();
// 	Dog* j = new Dog();
// 	Dog* k = new Dog();
// 	Cat* i = new Cat();
// 	std::cout << j->getType() << " j" << std::endl;
// 	std::cout << i->getType() << " i" << std::endl;
// 	j->makeSound();
// 	i->makeSound(); //will output the cat sound!
// 	i->makeSound();
// 	i->makeSound();
// 	i->makeSound();
// 	meta->makeSound();

// 	std::cout << std::endl;
// 	j->getThoughts()->think();
// 	std::cout << j->getType() << " J has thunk so here is his thoughts :" << std::endl;
// 	j->getThoughts()->talk();
	
// 	// K copies(steals) all the ideas from J
// 	std::cout << std::endl;
// 	k->getThoughtsFrom(j->getThoughts());
// 	std::cout << k->getType() << " K has thunk so here is his thoughts :" << std::endl;
// 	k->getThoughts()->talk();

// 	std::cout << std::endl;
// 	i->getThoughts()->think();
// 	std::cout << i->getType() << " I has thunk so here is his thoughts :" << std::endl;
// 	i->getThoughts()->talk();
// 	std::cout << std::endl;



// 	delete meta;
// 	delete j;
// 	delete k;
// 	delete i;
// 	return 0;
// }
