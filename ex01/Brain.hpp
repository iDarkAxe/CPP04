#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

#define NBR_IDEAS 100
#ifndef DEBUG
# define DEBUG 0
#endif 

class Brain
{
	private:
		std::string ideas[NBR_IDEAS];

	public:
		Brain();
		~Brain();
		Brain(const Brain &f);
		Brain &operator=(const Brain &other);

		void think();
		void talk() const;
};

#endif
