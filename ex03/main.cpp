/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/27 16:46:48 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	fizz("Fizz");
	DiamondTrap	buzz("Buzz");
	int			i(0);

	std::cout << std::endl;
	fizz.announce();
	buzz.announce();
	std::cout << std::endl;
	fizz.attack("Buzz");
	buzz.takeDamage(30);
	buzz.beRepaired(42);
	fizz.highFivesGuys();
	buzz.guardGate();
	std::cout << std::endl;
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(100);
	buzz.takeDamage(100);
	std::cout << std::endl;
	while (i++ < 50)
		buzz.attack("Meteor");
	std::cout << std::endl;
	return (0);
}
