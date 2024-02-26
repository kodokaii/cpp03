/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/26 13:05:14 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPoint;
		unsigned int	energyPoint;
		unsigned int	attackDamage;

	public:
					ClapTrap(void);
					ClapTrap(ClapTrap const &clapTrap);
					ClapTrap(std::string const &name);
					~ClapTrap(void);
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		ClapTrap	&operator=(ClapTrap const &clapTrap);

};

#endif
