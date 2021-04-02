/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:46:35 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:32:10 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{

public:

	RadScorpion( void );
	virtual ~RadScorpion( void );

private:

	RadScorpion( RadScorpion const & src );
	RadScorpion & operator=( RadScorpion const & rhs );
};

#endif
