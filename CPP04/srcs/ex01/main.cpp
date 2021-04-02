/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:22:10 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/01 08:00:10 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Barman.hpp"
#include "BottleOfTequila.hpp"

int		main(void)
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* d = new Barman();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* bt = new BottleOfTequila();

	me->equip(pr);
	std::cout << *me;
	me->equip(bt);
	me->attack(d);
	std::cout << *me;
	me->attack(d);
	std::cout << *me;
	me->attack(d);
	std::cout << *me;
	me->attack(c);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(b);
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->equip(pf);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;

	return 0;
}
