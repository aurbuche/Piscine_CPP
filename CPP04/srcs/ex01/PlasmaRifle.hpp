/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:05:37 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:23:17 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: virtual public AWeapon
{

public:

	PlasmaRifle( void );
	virtual ~PlasmaRifle( void );

	virtual void attack( void ) const;

private:

	PlasmaRifle & operator=( PlasmaRifle const & rhs );
	PlasmaRifle( PlasmaRifle const & src );

};

#endif
