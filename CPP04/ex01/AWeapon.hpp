#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon
{
public:
	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &rhs);
	virtual ~AWeapon(void);
	AWeapon				&operator=(const AWeapon &rhs);

//	GETTER // SETTER

	std::string			getName(void) const;
	void				setName(std::string const value);
	int					getDamage(void) const;
	void				setDamage(int const value);
	int					getAP(void) const;
	void				setAP(int const value);
	void				getAtt();
	std::string			getSound(void) const;
	void				setSound(std::string const value);
	virtual void		attack() const = 0;

protected:
	std::string			m_name;
	int					m_AP;
	int					m_damage;
	std::string			m_sound;
};

#endif