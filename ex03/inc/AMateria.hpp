#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria(void);
		
	protected:
		std::string _type;
		// [...]
		
	public:
		virtual ~AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &f);
		AMateria &operator=(const AMateria &other);
		// [...]

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
