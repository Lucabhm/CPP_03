/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:46:55 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/02 13:27:08 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Luca");
	FragTrap	b("Tom");

	a.attack(b.getName());
	b.takeDamage(a.getAd());
	a.highFivesGuys();
	b.beRepaired(5);
	if (b.getEp() > 0 && b.getHp() > 0)
	{
		b.attack(a.getName());
		a.takeDamage(b.getAd());
		a.beRepaired(5);
	}
}