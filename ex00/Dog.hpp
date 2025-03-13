#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	protected:
	
	public:
		Dog();
		~Dog();
		Dog(const Dog &f);
		Dog &operator=(const Dog &other);

		const std::string getType() const;
		void makeSound() const;
};

#endif
