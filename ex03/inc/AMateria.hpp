#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria(void);
		
	protected:
		std::string _type;
		
	public:
		virtual ~AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &f);
		AMateria &operator=(const AMateria &other);
		
		virtual AMateria* clone() const = 0;
		std::string const & getType() const;
		virtual void use(ICharacter& target);
};

#endif
