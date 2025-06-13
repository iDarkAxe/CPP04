#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Rules.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		Character();
		AMateria *_items[MATERIA_MAX];

	public:
		Character(std::string name);
		Character(const Character &other);
		~Character();
		Character &operator=(const Character &other);

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		AMateria *throw_materia(int idx);
		void use(int idx, ICharacter& target);
};

#endif
