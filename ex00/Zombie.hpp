/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:06:59 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/29 18:07:00 by haroldsorel      ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        void    announce(void) const;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
#endif
