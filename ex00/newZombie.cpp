/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:15 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/29 18:07:16 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie  *new_zombie;

    new_zombie = new Zombie(name);
    return(new_zombie);
}
