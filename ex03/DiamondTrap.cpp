/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/27 16:39:18 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void): ClapTrap("Unamed_clap_name", 100, 50, 30),
								name("Unamed")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name", 100, 50, 30),
												   name(name)
{
	std::cout << "DiamondTrap Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap):	ClapTrap(diamondTrap),
															name(diamondTrap.name)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void		DiamondTrap::announce(void)
{
	std::cout << "My name is: " << this->name
		<< ", My clap name is " << this->ClapTrap::name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &diamondTrap)
{
	this->ClapTrap::name = diamondTrap.ClapTrap::name;
	this->name = diamondTrap.name;
	this->hitPoint = diamondTrap.hitPoint;
	this->energyPoint = diamondTrap.energyPoint;
	this->attackDamage = diamondTrap.attackDamage;
	return (*this);
}
