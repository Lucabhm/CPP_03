/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:29:12 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/02 13:02:37 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Luca");
	ClapTrap	b("Tom");

	a.attack(b.getName());
	b.takeDamage(a.getAd());
	b.beRepaired(5);
	if (b.getEp() > 0 && b.getHp() > 0)
	{
		b.attack(a.getName());
		a.takeDamage(b.getAd());
		a.beRepaired(5);
	}
	return (0);
}
