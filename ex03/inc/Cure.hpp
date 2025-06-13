#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();

		// 	std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
