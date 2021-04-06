#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		~Character(void);
		Character			&operator=(const Character &rhs);

//		GETTER // SETTER

		std::string			const & getName(void) const;
		void				setName(std::string const value);

	private:
		AMateria**			_inventory;
		std::string			_name;
		int					_count;
};

#endif