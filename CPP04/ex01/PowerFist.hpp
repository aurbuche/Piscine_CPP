#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(const PowerFist &rhs);
		virtual ~PowerFist(void);
		PowerFist			&operator=(const PowerFist &rhs);
		void	attack() const;

};

#endif