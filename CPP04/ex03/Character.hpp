#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;
class ICharacter;

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		~Character(void);
		Character			&operator=(const Character &rhs);

//		GETTER // SETTER

		virtual std::string	const &	getName(void) const;
		void						setName(std::string const value);
		virtual void				equip(AMateria* material);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);

	private:
		AMateria**			_inventory;
		std::string			_name;
		int					_count;
};

#endif