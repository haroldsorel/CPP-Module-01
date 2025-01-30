/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:12:36 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/29 19:12:37 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie *zombieHord(int N, std::string name)
{
    Zombie  *zombie_list;

    if (N < 1)
    {
        std::cout << "Hord needs to be at least one zombie."<< std::endl;
        return (NULL);
    }
    zombie_list = new Zombie[N];
    if (zombie_list == NULL)
    {
        std::cout << "Memory allocation failure."<< std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
    {
        zombie_list[i].set_name(name);
    }
    return (zombie_list);
}