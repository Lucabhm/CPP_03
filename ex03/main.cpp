/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:08:15 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/02 12:51:36 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("Luca");
	DiamondTrap	b("Tom");

	a.attack(b.getName());
	b.takeDamage(a.getAd());
	a.whoAmI();
	a.guardGate();
	a.highFivesGuys();
	b.beRepaired(5);
	if (b.getEp() > 0 && b.getHp() > 0)
	{
		b.attack(a.getName());
		a.takeDamage(b.getAd());
		a.beRepaired(5);
		b.whoAmI();
	}
}
