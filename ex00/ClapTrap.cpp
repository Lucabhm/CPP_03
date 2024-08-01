/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:29:17 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/01 09:47:26 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor

ClapTrap::ClapTrap(void)
{
	std::cout << "Defalut Constructor called" << std::endl;
	this->name = "Default";
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with name attribut called" << std::endl;
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default Destructor called" << std::endl;
}

// operator

ClapTrap	&ClapTrap::operator= (ClapTrap const &cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->name = cpy.name;
		this->hp = cpy.hp;
		this->ep = cpy.ep;
		this->ad = cpy.ad;
	}
	return (*this);
}

// Member function

void	ClapTrap::attack(const std::string& target)
{
	if (hp > 0 && ep > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " \
		<< ad << " points of damage!" << std::endl;
		ep--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hp > 0 && ep > 0)
	{
		std::cout << "ClapTrap " << name << " get attacked and lost " << amount
		<< " health Points" << std::endl;
		hp -= amount;
		if (hp <= 0)
			std::cout << "ClapTrap " << name << " is dead" << std::endl;
		else
			std::cout << "ClapTrap " << name << " has " << hp <<
			" health Points left" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hp > 0 && ep > 0)
	{
		hp += amount;
		ep--;
		std::cout << "ClapTrap " << name << " repair itself and has now "
		<< hp << " health Points" << std::endl;
	}
}

std::string	ClapTrap::getName(void){return (name);}

int	ClapTrap::getHp(void){return (hp);}

int	ClapTrap::getEp(void){return (ep);}

int	ClapTrap::getAd(void){return (ad);}