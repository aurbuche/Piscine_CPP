/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:22:45 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/12 10:08:49 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{

public: 
	Squad( void );
	Squad( ISquad const & src );
	~Squad( void );

	Squad & operator=( ISquad const & rhs );
	int getCount( void ) const;
	ISpaceMarine* getUnit( int N ) const;
	int push( ISpaceMarine* unit );

private:

	ISpaceMarine **_unit;
	int	_count;

};

#endif
