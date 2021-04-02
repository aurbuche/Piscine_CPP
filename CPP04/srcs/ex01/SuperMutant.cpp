/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:42:53 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/01 08:00:27 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage( int d )
{
	if (d > 0)
		this->_hp = (this->_hp - d) + 3;
	if (this->_hp < 0)
		this->_hp = 0;
}
