/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/27 15:47:56 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
				ScavTrap(void);
				ScavTrap(std::string const &name);
				ScavTrap(ScavTrap const &scavTrap);
				~ScavTrap(void);
	void		attack(std::string const &target);
	void		guardGate(void);
	ScavTrap	&operator=(ScavTrap const &scavTrap);
};

#endif
