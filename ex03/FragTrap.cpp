/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/27 00:40:04 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(void): ClapTrap("Unamed", 100, 100, 30)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrap): ClapTrap(fragTrap)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void		FragTrap::attack(std::string const &target)
{
	if (this->hitPoint)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", ";
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

void		FragTrap::highFivesGuys(void)
{
	if (this->hitPoint)
		std::cout << "FragTrap " << this->name << " wants to do a high five !" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &fragTrap)
{
	this->name = fragTrap.name;
	this->hitPoint = fragTrap.hitPoint;
	this->energyPoint = fragTrap.energyPoint;
	this->attackDamage = fragTrap.attackDamage;
	return (*this);
}
