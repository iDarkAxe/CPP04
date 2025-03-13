#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	protected:
	
	public:
		Cat();
		~Cat();
		Cat(const Cat &f);
		Cat &operator=(const Cat &other);

		const std::string getType() const;
		void makeSound() const;
};

#endif
