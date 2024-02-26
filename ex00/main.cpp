/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/26 12:45:37 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	fizz("Fizz");
	ClapTrap	buzz("Buzz");
	int			i(0);

	fizz.attack("Buzz");
	buzz.takeDamage(0);
	buzz.beRepaired(42);
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(21);
	buzz.takeDamage(21);
	while (i++ < 10)
		buzz.attack("Meteor");
	return (0);
}
