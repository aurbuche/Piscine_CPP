/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Barman.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:19:41 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:32:24 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BARMAN_HPP
# define BARMAN_HPP

#include "Enemy.hpp"

class Barman: public Enemy
{

public:

	Barman( void );
	virtual ~Barman( void );

private:

	Barman( Barman const & src );
	Barman & operator=( Barman const & rhs );
};

#endif
