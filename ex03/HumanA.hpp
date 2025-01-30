/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:45:10 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 13:45:11 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
    private :
        std::string _name;
        Weapon      &_weapon;
    public :
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack(void)const;
};

