/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:35:50 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:24:56 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{

public:

	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon( void );
	AWeapon( AWeapon const & src );
	AWeapon & operator=( AWeapon const & rhs );

	std::string const & getName( void ) const;
	int getAPCost( void ) const;
	int getDamage( void ) const;
	virtual void attack( void ) const = 0;

protected:

	AWeapon( void );
	std::string _name;
	int	_apcost;
	int _damage;

};

#endif