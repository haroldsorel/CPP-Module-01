/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:12:18 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/17 14:49:03 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
}

void    Zombie::announce(void)const
{
    std::string message;

    message = this->name + " : BraiiiiiiinnnzzzZ...";
    std::cout << message << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}