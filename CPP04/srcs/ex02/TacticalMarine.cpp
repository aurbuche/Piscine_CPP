/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:19:51 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:48:52 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh..." << std::endl;
}

void	TacticalMarine::battleCry( void ) const 
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack( void ) const
{
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine* TacticalMarine::clone( void ) const
{
	return (new TacticalMarine);
}
