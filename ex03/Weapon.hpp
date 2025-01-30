/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:49:15 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 13:49:18 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string _name;
    public:
        Weapon(std::string name);
        ~Weapon();
        void            setType(std::string weapon);
        const std::string     getType()const;
};

