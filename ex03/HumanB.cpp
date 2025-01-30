/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:45:16 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 13:45:17 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , _weapon(nullptr)
{
    std::cout << this->_name << " has spawned." << std::endl;
}

HumanB::~HumanB(void)
{

}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout <<  this->_name << "attacks with a " << this->_weapon->getType()  << std::endl;
}