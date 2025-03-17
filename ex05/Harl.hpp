/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:02:45 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/17 17:00:26 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl
{
    private :
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public :
        Harl(void);
        ~Harl(void);
        void    (Harl::*function_ptrs[5])(void) = {&Harl::debug,  &Harl::info, &Harl::warning, &Harl::error};
        std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};

        void    complain(std::string level);
};