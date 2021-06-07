#include "Enemy.hpp"

Enemy::Enemy(void) : m_hp(100), m_type("none")
{
}

Enemy::Enemy(int hp, std::string const &type): m_hp(hp), m_type(type) {
}

Enemy::Enemy(const Enemy &rhs)
{
	*this = rhs;
}

Enemy::~Enemy()
{
}

Enemy				&Enemy::operator=(const Enemy &rhs)
{
	this->m_hp = rhs.m_hp;
	this->m_type = rhs.m_type;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					Enemy::getHp(void) const
{
	return (m_hp);
}

void				Enemy::setHp(int const value)
{
	m_hp = value;
}

std::string			Enemy::getType(void) const
{
	return (m_type);
}

void				Enemy::setType(std::string const value)
{
	m_type = value;
}

void				Enemy::takeDamage(int damage) {
	if (damage > 0 && m_hp > 0)
		m_hp -= damage;
	if (m_hp <= 0)
	{
		m_hp = 0;
		std::cout << "Enemy has no more HP!" << std::endl;
	}
}
