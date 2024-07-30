/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:06:03 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 12:07:35 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default Constructor called" << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor with name attribut called" << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
	std::cout << "ScavTrap copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default Destructor called" << std::endl;
}

// operator

ScavTrap	&ScavTrap::operator= (ScavTrap const &cpy)
{
	std::cout << "SacvTrap copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->setName(cpy.getName());
		this->setHp(cpy.getHp());
		this->setEp(cpy.getEp());
		this->setAd(cpy.getAd());
	}
	return (*this);
}

// Member function

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->getEp() && this->getHp())
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " \
		<< this->getAd() << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
	}
}