/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:06:52 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/29 18:06:54 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " : has died of hunger" << std::endl;
}

void    Zombie::announce(void)const
{
    std::string message;

    message = this->name + " : BraiiiiiiinnnzzzZ...";
    std::cout << message << std::endl;
}

