/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:32:50 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 11:19:24 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( void )
{
	std::cout << "Default constructor was called" << std::endl;
}

Peon::Peon( std::string name ) : Victim( name )
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( Peon const & src ): Victim( src )
{
	*this = src;
}

Peon &	Peon::operator=( Peon const & rhs )
{
	this->_name = rhs._name;
	std::cout << " Some random Peon called " << this->_name << " just appeared!";
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Peon const & i )
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return o;
}

void	Peon::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}