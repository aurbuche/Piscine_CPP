#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy
{
public:
	Enemy(void);
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &rhs);
	virtual ~Enemy(void);
	Enemy				&operator=(const Enemy &rhs);

//	GETTER // SETTER

	int					getHp(void) const;
	void				setHp(int const value);
	std::string			getType(void) const;
	void				setType(std::string const value);
	virtual void		takeDamage(int damage);

protected:
	int					m_hp;
	std::string			m_type;
};

#endif