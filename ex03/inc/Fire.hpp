#ifndef FIRE_HPP
# define FIRE_HPP

#include "AMateria.hpp"
#include "Rules.hpp"

# if MORE_CLASSES == 1
	class Fire : public AMateria
	{
		public:
			Fire() : AMateria("fire") {}
			~Fire() {}
			Fire(const Fire &other);
			Fire &operator=(const Fire &other);

			Fire* clone() const;
			std::string const & getType() const;
			void use(ICharacter& target);
	};
# endif

#endif
