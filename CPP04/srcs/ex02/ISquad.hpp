/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:17:33 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 11:29:26 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{

public:

	virtual ~ISquad( void ) {};
	virtual int getCount( void ) const = 0;
	virtual ISpaceMarine* getUnit( int ) const = 0;
	virtual int push( ISpaceMarine* unit ) = 0;

};

#endif
