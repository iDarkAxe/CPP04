#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog &f);
		Dog &operator=(const Dog &other);

		const std::string getType() const;
		Brain *getThoughts();
		void getThoughtsFrom(Brain *brain);
		void makeSound() const;
};

#endif
