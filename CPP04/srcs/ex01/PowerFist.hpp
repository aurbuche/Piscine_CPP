/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:20:15 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:23:16 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: virtual public AWeapon
{

public:

	PowerFist( void );
	virtual ~PowerFist( void );

	virtual void attack( void ) const;

private:

	PowerFist & operator=( PowerFist const & rhs );
	PowerFist( PowerFist const & src );

};

#endif
