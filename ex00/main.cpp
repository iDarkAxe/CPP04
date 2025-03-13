/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:31:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 16:42:45 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>


int main()
{
	// Functionning Class
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " j" << std::endl;
		std::cout << i->getType() << " i" << std::endl;
		j->makeSound();
		i->makeSound(); //will output the cat sound!
		i->makeSound();
		i->makeSound();
		i->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
		// 
	}
	std::cout << "\n\n";
	// Mal-functionning Class
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " i" << std::endl;
		i->makeSound(); //will try to output the wrongcat sound!
		i->makeSound();
		i->makeSound();
		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
	}
	return 0;
}
