/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/26 13:27:17 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):	name("Unamed"),
							hitPoint(10),
							energyPoint(10),
							attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): name(name),
											 hitPoint(10),
											 energyPoint(10),
											 attackDamage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap):	name(clapTrap.name),
												hitPoint(clapTrap.hitPoint),
												energyPoint(clapTrap.energyPoint),
												attackDamage(clapTrap.attackDamage)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void		ClapTrap::attack(std::string const &target)
{
	if (this->hitPoint)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", ";
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

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint)
	{
		std::cout << "ClapTrap " << this->name << " take "
			<< amount << " damages !" << std::endl;
		if (amount < this->hitPoint)
			this->hitPoint -= amount;
		else
		{
			std::cout << "ClapTrap " << this->name << " die !" <<  std::endl;
			this->hitPoint = 0;
		}
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint)
	{
		std::cout << "ClapTrap " << this->name << " repair himself, ";
		if (this->energyPoint)
		{
			std::cout << "he gains " << amount << " hit point !";
			this->hitPoint += amount;
			this->energyPoint--;
		}
		else
			std::cout << "but has no more energy, repair fails !";
		std::cout << std::endl;
	}
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clapTrap)
{
	this->name = clapTrap.name;
	this->hitPoint = clapTrap.hitPoint;
	this->energyPoint = clapTrap.energyPoint;
	this->attackDamage = clapTrap.attackDamage;
	return (*this);
}
