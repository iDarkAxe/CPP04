#ifndef RULES_HPP
# define RULES_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

# ifndef MATERIA_MAX
#  define MATERIA_MAX 4
# endif

# ifndef MORE_CLASSES
#  define MORE_CLASSES 0
# endif

# if MORE_CLASSES == 1
	class Earth : public AMateria
	{

		public:
			Earth() : AMateria("earth") {}
			~Earth() {}
			Earth* clone() const;
			void use(ICharacter& target);
	};

	class Fire : public AMateria
	{

		public:
			Fire() : AMateria("fire") {}
			~Fire() {}
			Fire* clone() const;
			void use(ICharacter& target);
	};
# endif

#endif
