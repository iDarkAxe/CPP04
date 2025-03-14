#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal 
{
	protected:
		std::string type;
		Animal();	
		Animal(const Animal &f);
	
	private:
		
	public:
		virtual ~Animal();
		Animal &operator=(const Animal &other);

		virtual const std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
