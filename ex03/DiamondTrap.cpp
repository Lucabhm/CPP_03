/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:36:50 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/02 14:54:06 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap defalut Constructor called" << std::endl;
	this->name = "Default";
	ClapTrap::setName("Default_clap_name");
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamoadTrap Constructor with name attribut called" << std::endl;
	this->name = name;
	ClapTrap::setName(name.append("_clap_name"));
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy)
{
	std::cout << "DiamondTrap copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default Destructor called" << std::endl;
}

// Operators

DiamondTrap	&DiamondTrap::operator= (DiamondTrap const &cpy)
{
	std::cout << "DiamondTarp copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->name = cpy.name;
		this->ClapTrap::setName(cpy.ClapTrap::getName());
		this->ep = cpy.ep;
		this->hp = cpy.hp;
		this->ad = cpy.ad;
	}
	return (*this);
}

// Member functions

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap my name is " << this->name <<
	" and the name of my ClapTrap is " << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}