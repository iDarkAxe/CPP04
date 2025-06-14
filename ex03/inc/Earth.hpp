#ifndef EARTH_HPP
# define EARTH_HPP

#include "AMateria.hpp"
#include "Rules.hpp"

# if MORE_CLASSES == 1
	class Earth : public AMateria
	{
		public:
			Earth() : AMateria("earth") {}
			~Earth() {}
			Earth(const Earth &other);
			Earth &operator=(const Earth &other);

			Earth* clone() const;
			std::string const & getType() const;
			void use(ICharacter& target);
	};
# endif

#endif
