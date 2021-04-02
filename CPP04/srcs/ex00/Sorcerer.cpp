/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:18:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 09:09:43 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void )
{
	std::cout << "Default constructor was called" << std::endl;
}

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << _name << ", " << _title << ",  is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer &		Sorcerer::operator=( Sorcerer const & rhs )
{
	this->_name = rhs._name;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

std::string Sorcerer::getName( void ) const
{
	return this->_name;
}
std::string Sorcerer::getTitle( void ) const
{
	return this->_title;
}

void	Sorcerer::polymorph( Victim const & victim ) const
{
	return victim.getPolymorphed();
}