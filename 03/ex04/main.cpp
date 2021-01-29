/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 16:59:59 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/18 20:06:38 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    FragTrap utoomey("utoomey");
    ScavTrap chuvak("chuvak");
    ClapTrap libovski("libovski");
    NinjaTrap jobs("jobs");
    SuperTrap wozniak("wozniak");

    srand(time(NULL));
    std::cout << std::endl;
    wozniak.meleeAttack("utoomey");
    wozniak.rangedAttack("utoomey");
    wozniak.takeDamage(21);
    wozniak.beRepaired(42);
    wozniak.takeDamage(2);
    wozniak.takeDamage(50);
    wozniak.takeDamage(50);
    wozniak.takeDamage(50);
    wozniak.beRepaired(42);
    wozniak.ninjaShoebox(utoomey);
    wozniak.ninjaShoebox(chuvak);
    wozniak.ninjaShoebox(libovski);
    wozniak.vaulthunter_dot_exe("utoomey");
	return (0);
}
