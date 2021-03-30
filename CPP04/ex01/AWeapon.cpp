#include "AWeapon.hpp"

AWeapon::AWeapon(void) : m_name("none"), m_AP(0), m_damage(0)
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: m_name(name), m_AP(apcost), m_damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &rhs)
{
	*this = rhs;
}

AWeapon::~AWeapon(void)
{
}

AWeapon				&AWeapon::operator=(const AWeapon &rhs)
{
	this->m_name = rhs.m_name;
	this->m_damage = rhs.m_damage;
	this->m_AP = rhs.m_AP;
//	this->m_sound = rhs.m_sound;
//	this->m_sg = rhs.m_sg;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			AWeapon::getName(void) const
{
	return (m_name);
}

void				AWeapon::setName(std::string const value)
{
	m_name = value;
}

int					AWeapon::getDamage(void) const
{
	return (m_damage);
}

void				AWeapon::setDamage(int const value)
{
	m_damage = value;
}

int					AWeapon::getAP(void) const
{
	return (m_AP);
}

void				AWeapon::setAP(int const value)
{
	m_AP = value;
}

void				AWeapon::getAtt() {
	std::cout << getName() << " cost " << getAP() << " and distresses " << getDamage() << "HP." << std::endl;
}

//std::string			AWeapon::getSound(void) const
//{
//	return (m_sound);
//}
//
//void				AWeapon::setSound(std::string const value)
//{
//	m_sound = value;
//}
//
//std::string			AWeapon::getLightingEffect() {
//	return m_LightingEffect;
//}
//
//void				AWeapon::setLightingEffect(std::string value) {
//	m_lightingEffect = value;
//}
