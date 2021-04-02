/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:36:21 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/01 08:01:10 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( int hp, std::string const & type ): _hp(hp), _type(type)
{

}

Enemy::~Enemy( void )
{

}

void	Enemy::takeDamage( int d )
{
	if (d > 0)
		this->_hp -= d;
	if (this->_hp < 0)
		this->_hp = 0;
}

int 	Enemy::getHP( void ) const
{
	return this->_hp;
}

void	Enemy::setHP( int i )
{
	_hp -= i;
	if (this->_hp < 0)
		this->_hp = 0;
}

std::string const & Enemy::getType( void ) const
{
	return this->_type;
}
