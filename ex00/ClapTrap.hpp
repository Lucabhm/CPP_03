/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:29:15 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/29 13:36:36 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	private:
		std::string	name;
		int			hp;
		int			ep;
		int			ad;
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &cpy);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap	&operator= (ClapTrap const &cpy);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif