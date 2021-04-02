/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Barman.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:18:51 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 11:22:09 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Barman.hpp"

Barman::Barman( void )
{
	std::cout << "Default constructor was called" << std::endl;
}

Barman::Barman( std::string name ) : Victim( name )
{
	std::cout << "Cling cling !" << std::endl;
}

Barman::~Barman( void )
{
	std::cout << "No more tips...." << std::endl;
}

Barman::Barman( Barman const & src ): Victim( src )
{
	*this = src;
}

Barman &	Barman::operator=( Barman const & rhs )
{
	this->_name = rhs._name;
	std::cout << " Some random Barman called " << this->_name << " just appeared!";
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Barman const & i )
{
	o << "I'm " << i.getName() << " and I don't like moderation!" << std::endl;
	return o;
}

void	Barman::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a good mojito!" << std::endl;
}
