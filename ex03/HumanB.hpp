/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:45:24 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 13:45:25 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    private :
        std::string _name;
        Weapon      *_weapon;
    public :
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon &weapon);
        void    attack(void);
};
