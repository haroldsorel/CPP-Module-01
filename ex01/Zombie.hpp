/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:12:23 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/29 19:12:25 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie();
        ~Zombie();
        void    announce(void) const;
        void    set_name(std::string name);
};

Zombie  *zombieHord(int N, std::string name);
Zombie  *newZombie(std::string name);
#endif
