#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
	protected:
		std::string type;
	
	private:
	
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &f);
		WrongAnimal &operator=(const WrongAnimal &other);

		const std::string getType() const;
		void makeSound() const;
};

#endif
