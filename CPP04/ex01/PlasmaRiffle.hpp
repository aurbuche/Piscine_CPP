#ifndef PLASMARIFFLE_HPP
# define PLASMARIFFLE_HPP
# include "AWeapon.hpp"

class PlasmaRiffle : public AWeapon
{
	public:
		PlasmaRiffle(void);
		PlasmaRiffle(const PlasmaRiffle &rhs);
		~PlasmaRiffle(void);
		PlasmaRiffle			&operator=(const PlasmaRiffle &rhs);
		void	attack() const;

};

#endif