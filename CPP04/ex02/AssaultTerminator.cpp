#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &rhs)
{
	*this = rhs;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator			&AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

void		AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. Purify it!" << std::endl;
}

void		AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

void		AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone( void ) const
{
	return (new AssaultTerminator);
}
