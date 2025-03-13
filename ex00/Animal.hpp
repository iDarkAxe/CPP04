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
		~Animal();
		Animal(std::string animal_type);
		Animal(const Animal &f);
		Animal &operator=(const Animal &other);

		const std::string getType() const;
		void makeSound() const;
};

#endif