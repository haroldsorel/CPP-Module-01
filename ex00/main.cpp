/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:04 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/29 18:07:06 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie stack_zombie("Stack");
    Zombie *malloced_zombie;

    stack_zombie.announce();
    randomChump("Chumpy");
    malloced_zombie = newZombie("Malloc");
    malloced_zombie->announce();
    delete malloced_zombie;
    return (0);
}
