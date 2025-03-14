#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	// private:
	// 	AMateria(void);

	// protected:
	// 	// [...]

	public:
		Cure();
		~Cure();
		// 	AMateria(std::string const & type);
		// 	// [...]

		// 	std::string const & getType() const; //Returns the materia type
		// 	virtual AMateria* clone() const = 0;
		// 	virtual void use(ICharacter& target);
};

#endif
