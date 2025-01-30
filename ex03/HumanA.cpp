/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:45:04 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 13:45:06 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << this->_name << " has spawned." << std::endl;
}

HumanA::~HumanA(void)
{   
}

void    HumanA::attack(void)const
{
    std::cout <<  this->_name << " attacks with a " << this->_weapon.getType()  << std::endl;
}
