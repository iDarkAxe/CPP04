#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
	
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &f);
		WrongCat &operator=(const WrongCat &other);

		const std::string getType() const;
		void makeSound() const;
};

#endif
