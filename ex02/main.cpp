/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:31:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/14 12:53:03 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

#define NUMBER_OF_ANIMALS 100

// int main()
// {
// 	Animal *array[NUMBER_OF_ANIMALS];

// 	for (int i = 0; i < NUMBER_OF_ANIMALS / 2; i++)
// 	{
// 		array[i] = new Dog();
// 		array[NUMBER_OF_ANIMALS - i - 1] = new Cat();
// 	}

// 	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
// 	{
// 		std::cout << "Animal[" << i << "] is " << array[i]->getType() << std::endl;
// 	}

// 	for (int i = 0; i < NUMBER_OF_ANIMALS / 2; i++)
// 	{
// 		// Make the dogs bark
// 		std::cout << "Animal[" << i << "] : ";
// 		array[i]->makeSound();
// 		// Make the cat mewow
// 		std::cout << "Animal[" << NUMBER_OF_ANIMALS - i - 1 << "] : ";
// 		array[NUMBER_OF_ANIMALS - i - 1]->makeSound();
// 	}
	
// 	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
// 		delete array[i];
// 	return 0;
// }

/*
	Example to show changes
	Animal is an abstract class so it shouldn't compile
*/ 
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

// 	delete meta;
// 	delete j;
// 	delete k;
// 	delete i;
// 	return 0;
// }
