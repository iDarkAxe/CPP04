#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	// protected:
	// [...]

	public:
		Ice();
		~Ice();
		// 	AMateria(std::string const & type);
		// 	// [...]

		// 	std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		// 	virtual void use(ICharacter& target);
};

#endif
