/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:12:29 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/17 14:48:51 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *hord;
    int     len;

    len = 10;
    hord = zombieHord(len, "James");
    for (int i = 0; i < len; i++)
    {
        hord[i].announce();
    }
    delete[] hord;
    return (0);
}

