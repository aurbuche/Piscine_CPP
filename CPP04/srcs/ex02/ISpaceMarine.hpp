/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:19:07 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 10:56:21 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{

public:

	virtual ~ISpaceMarine( void ) {};
	virtual ISpaceMarine* clone( void ) const = 0;
	virtual void battleCry( void ) const = 0;
	virtual void rangedAttack( void ) const = 0;
	virtual void meleeAttack( void ) const = 0;

};

#endif
