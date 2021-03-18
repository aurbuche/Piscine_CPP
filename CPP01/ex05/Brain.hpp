#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <cctype>
# include <iostream>
# include <cstring>

class	Brain
{
	public:
		Brain();
		~Brain();
		std::string identify();
		void setIQ(int IQ);
		int	getIQ(void);
		void setWeight(int IQ);
		int	getWeight(void);

	private:
		int IQ;
		int weight;
};

#endif
