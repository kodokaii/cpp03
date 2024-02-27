/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/27 16:42:54 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	fizz("Fizz");
	ScavTrap	buzz("Buzz");
	int			i(0);

	std::cout << std::endl;
	fizz.attack("Buzz");
	buzz.takeDamage(20);
	buzz.beRepaired(42);
	fizz.guardGate();
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
