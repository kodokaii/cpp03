/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/26 17:38:54 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void): ClapTrap("Unamed", 100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap): ClapTrap(scavTrap)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void		ScavTrap::attack(std::string const &target)
{
	if (this->hitPoint)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", ";
		if (this->energyPoint)
		{
			std::cout << "causing " << this->attackDamage << " points of damage !";
			this->energyPoint--;
		}
		else
			std::cout << "but has no more energy, attack fails !";
		std::cout << std::endl;
	}
}


void		ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode !" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scavTrap)
{
	this->name = scavTrap.name;
	this->hitPoint = scavTrap.hitPoint;
	this->energyPoint = scavTrap.energyPoint;
	this->attackDamage = scavTrap.attackDamage;
	return (*this);
}
