/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:12:29 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/29 19:12:31 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
    Zombie *hord;
    int     len;

    len = 5;
    hord = zombieHord(len, "James");
    for (int i = 0; i < len; i++)
    {
        hord[i].announce();
    }
    delete[] hord;
    return (0);
}

