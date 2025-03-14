#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		// virtual ~IMateriaSource() {}
		// virtual void learnMateria(AMateria*) = 0;
		// virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif