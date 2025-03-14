#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat &f);
		Cat &operator=(const Cat &other);

		const std::string getType() const;
		Brain *getThoughts();
		void getThoughtsFrom(Brain *brain);
		void makeSound() const;
};

#endif
