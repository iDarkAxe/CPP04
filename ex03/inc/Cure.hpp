#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &f);
		~Cure();
		Cure &operator=(const Cure &other);
		
		Cure* clone() const;
		std::string const & getType() const;
		void use(ICharacter& target);
};

#endif
