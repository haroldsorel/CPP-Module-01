/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:45:51 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 13:45:52 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _name(name)
{
}

Weapon::~Weapon(void)
{
}

void    Weapon::setType(std::string name)
{
    this->_name = name;
}

const std::string Weapon::getType(void)const
{
    return (this->_name);
}
