#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	// private:
	// 	AMateria(void);

	// protected:
	// 	// [...]

	public:
		Ice();
		~Ice();
		// 	AMateria(std::string const & type);
		// 	// [...]

		// 	std::string const & getType() const; //Returns the materia type
		// 	virtual AMateria* clone() const = 0;
		// 	virtual void use(ICharacter& target);
};

#endif
