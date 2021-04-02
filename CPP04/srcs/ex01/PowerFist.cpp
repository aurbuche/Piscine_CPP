/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:20:49 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 13:00:45 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ): AWeapon( "Power Fist", 8 , 50)
{

}

PowerFist::~PowerFist( void )
{

}

void	PowerFist::attack( void ) const

{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
