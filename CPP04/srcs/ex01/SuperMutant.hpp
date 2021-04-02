/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:40:25 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:30:58 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{

public:

	SuperMutant( void );
	virtual ~SuperMutant( void );

	virtual void takeDamage( int d );

private:

	SuperMutant( SuperMutant const & src );
	SuperMutant & operator=( SuperMutant const & rhs );
};

#endif
