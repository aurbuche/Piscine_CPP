/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Barman.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:20:27 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:32:21 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Barman.hpp"

Barman::Barman( void ): Enemy(130, "Barman")
{
	std::cout << "Let's gooooo drink bby !" << std::endl;
}

Barman::~Barman( void )
{
	std::cout << "* End of service * Everybody out !!" << std::endl;
}
