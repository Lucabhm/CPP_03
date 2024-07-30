/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:08:15 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 12:58:10 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("Luca");
	DiamondTrap	b("Tom");

	a.ScavTrap::attack(b.getName());
	b.takeDamage(a.getAd());
	a.whoAmI();
	b.beRepaired(5);
	b.ScavTrap::attack(a.getName());
	a.takeDamage(b.getAd());
	a.beRepaired(5);
}
