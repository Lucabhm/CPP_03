/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:29:15 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 12:24:16 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:
		std::string	name;
		int			hp;
		int			ep;
		int			ad;
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &cpy);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap	&operator= (ClapTrap const &cpy);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void) const;
		void		setName(std::string name);
		int			getHp(void) const;
		void		setHp(int value);
		int			getEp(void) const;
		void		setEp(int value);
		int			getAd(void) const;
		void		setAd(int value);
};

#endif