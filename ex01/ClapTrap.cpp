/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:29:17 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 12:06:21 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap defalut Constructor called" << std::endl;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor with name attribut called" << std::endl;
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	std::cout << "ClapTrap copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default Destructor called" << std::endl;
}

// operator

ClapTrap	&ClapTrap::operator= (ClapTrap const &cpy)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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

std::string	ClapTrap::getName(void) const {return (name);}

int	ClapTrap::getHp(void) const {return (hp);}

int	ClapTrap::getEp(void) const {return (ep);}

int	ClapTrap::getAd(void) const {return (ad);}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

void	ClapTrap::setHp(int value)
{
	hp = value;
}

void	ClapTrap::setEp(int value)
{
	ep = value;
}

void	ClapTrap::setAd(int value)
{
	ad = value;
}