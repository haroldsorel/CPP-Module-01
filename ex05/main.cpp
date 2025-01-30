/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:53:54 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 18:53:55 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.cpp"

int main()
{
    Harl harl;
    std::string buffer;

    while (1)
    {
        std::cout << "Options : DEBUG, INFO, WARNING, ERROR" << std::endl;
        std::cout << "-> ";
        if (!getline(std::cin, buffer))
            return (1);
        std::cout << std::endl;
        std::cout << "harl : ";
        harl.complain(buffer);
        std::cout << std::endl;

        std::cout << "Press any key to continue or type EXIT to exit the programm" << std::endl;
        std::cout << "-> ";
        if (!getline(std::cin, buffer))
            return (1);
        if (buffer == "EXIT")
            return (0);
        std::cout << std::endl;
    }
    return (0);
}

