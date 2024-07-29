/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:31:11 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/29 16:50:40 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap defalut Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor with name attribut called" << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
}

FragTrap::FragTrap(FragTrap const &cpy)
{
	std::cout << "FragTrap copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default Destructor called" << std::endl;
}

// Operator

FragTrap	&FragTrap::operator= (FragTrap const &cpy)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->setName(cpy.getName());
		this->setHp(cpy.getHp());
		this->setEp(cpy.getEp());
		this->setAd(cpy.getAd());
	}
	return (*this);
}

// Member functions

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " wants a high five" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->getEp() != 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target << " causing " \
		<< this->getAd() << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
	}
	else
		std::cout << "FragTrap " << this->getName() << " has no Energy points" << std::endl;
}