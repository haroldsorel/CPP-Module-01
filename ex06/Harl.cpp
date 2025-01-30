/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harold.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:53:47 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 18:53:49 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}


void    Harl::debug(void)
{
    std::cout << "[DEBUG]I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[INFO]I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[WARNING]I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ERROR]This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int i = 0;
    for (; i < 4; i++)
    {
        if (this->levels[i] == level)
            break ;
    }
    switch(i)
    {
        case(0):
            (this->*function_ptrs[0])();
        case(1):
            (this->*function_ptrs[1])();
        case(2):
            (this->*function_ptrs[2])();
        case(3):
            (this->*function_ptrs[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
    }
}
