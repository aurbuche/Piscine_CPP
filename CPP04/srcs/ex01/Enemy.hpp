/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:32:53 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:30:13 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{

public:

	Enemy(int hp, std::string const & type);
	virtual ~Enemy( void );

	std::string const & getType( void ) const;
	int getHP( void ) const;
	virtual void takeDamage( int d );
	void setHP( int i );

protected:

	int _hp;
	std::string _type;

private:

	Enemy( void );
	Enemy( Enemy const & src );
	Enemy & operator=( Enemy const & rhs );

};

#endif
