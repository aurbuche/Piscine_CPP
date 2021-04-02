/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:51:41 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 09:08:24 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void )
{
	std::cout << "Default constructor was called" << std::endl;
}

Victim::Victim( std::string name ) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim( Victim const & src )
{
	*this = src;
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim &	Victim::operator=( Victim const & rhs )
{
	this->_name = rhs._name;
	std::cout << " Some random victim called " << this->_name << " just appeared!";
	return *this;
}

std::string 	Victim::getName( void ) const
{
	return this->_name;
}

std::ostream &	operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return o;
}

void	Victim::getPolymorphed( void ) const
{
	std::cout << this->_name <<" has been turned into a cute little sheep!" << std::endl;
}
