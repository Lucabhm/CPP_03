/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:24:41 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/29 16:26:37 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Luca");
	ScavTrap	b("Tom");

	a.attack(b.getName());
	b.takeDamage(a.getAd());
	a.guardGate();
	b.beRepaired(5);
	b.attack(a.getName());
	a.takeDamage(b.getAd());
	a.beRepaired(5);
}
