/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BottleOfTequila.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:37:12 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:28:27 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOTTLEOFTEQUILA_HPP
# define BOTTLEOFTEQUILA_HPP

#include "AWeapon.hpp"

class BottleOfTequila: virtual public AWeapon
{

public:

	BottleOfTequila( void );
	virtual ~BottleOfTequila( void );

	virtual void attack( void ) const;

private:

	BottleOfTequila & operator=( BottleOfTequila const & rhs );
	BottleOfTequila( BottleOfTequila const & src );

};

#endif