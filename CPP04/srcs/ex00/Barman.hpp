/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Barman.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:18:21 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 09:08:41 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BARMAN_HPP
# define BARMAN_HPP

#include "Victim.hpp"

class Barman : public virtual Victim
{

public:

	Barman( std::string name );
	virtual ~Barman( void );
	Barman( Barman const & src);
	Barman & operator=( Barman const & rhs );
	virtual void getPolymorphed( void ) const;
	
private:

	Barman( void );
};

#endif
