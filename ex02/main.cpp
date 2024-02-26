/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/27 00:33:50 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fizz("Fizz");
	FragTrap	buzz("Buzz");
	int			i(0);

	fizz.attack("Buzz");
	buzz.takeDamage(30);
	buzz.beRepaired(42);
	fizz.highFivesGuys();
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(100);
	buzz.takeDamage(100);
	while (i++ < 100)
		buzz.attack("Meteor");
	return (0);
}
