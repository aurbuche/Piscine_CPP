/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:30:58 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 09:08:46 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public virtual Victim
{

public:

	Peon( std::string name );
	virtual ~Peon( void );
	Peon( Peon const & src);
	Peon & operator=( Peon const & rhs );
	virtual void getPolymorphed( void ) const;
	
private:

	Peon( void );
};

#endif
