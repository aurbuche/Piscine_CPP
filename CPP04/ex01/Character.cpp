#include "Character.hpp"


Character::Character(void) : m_name("none"), m_AP(40)
{
	m_weapon = NULL;
}

Character::Character(std::string const & name): m_name(name), m_AP(40)
{
	m_weapon = NULL;
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character::~Character(void)
{
}

Character			&Character::operator=(const Character &rhs)
{
	this->m_name = rhs.m_name;
	this->m_AP = rhs.m_AP;
	this->m_weapon = rhs.m_weapon;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Character::getName(void) const
{
	return (m_name);
}

void				Character::setName(std::string const value)
{
	m_name = value;
}

int					Character::getAP(void) const
{
	return (m_AP);
}

void				Character::setAP(int const value)
{
	m_AP = value;
}

AWeapon	const		*Character::getWeapon(void) const
{
	return (m_weapon);
}

void				Character::setWeapon(AWeapon const *value)
{
	m_weapon = value;
}

void				Character::recoverAP() {
	if (m_AP >= 40)
		std::cout << "Error: You have already 40 or more AP, I don\'t give you more!\n";
	if (m_AP < 40)
		m_AP += 10;
	if (m_AP > 40)
		m_AP = 40;
}

void				Character::equip(AWeapon *weapon) {
	setWeapon(weapon);
}

void				Character::attack(Enemy *enemy) {
	if (m_AP > getWeapon()->getAP()) {
		m_AP -= getWeapon()->getAP();
		std::cout << getName() << " attacks " << enemy->getType() << " with a " << getWeapon()->getName() << std::endl;
		getWeapon()->attack();
	}
	else
		std::cout << "You need to recover some AP!" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Character const & rhs){
	if (rhs.getWeapon() != NULL)
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed." << std::endl;
	return o;
}
