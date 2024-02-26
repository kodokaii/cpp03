/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/26 23:09:44 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
				FragTrap(void);
				FragTrap(std::string const &name);
				FragTrap(FragTrap const &fragTrap);
				~FragTrap(void);
	void		attack(std::string const &target);
	void		highFivesGuys(void);
	FragTrap	&operator=(FragTrap const &fragTrap);
};

#endif
