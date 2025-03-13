#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal 
{
	protected:
		std::string type;
	
	private:
	
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &f);
		Animal &operator=(const Animal &other);

		const std::string getType() const;
		virtual void makeSound() const;
};

#endif
