/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:32:03 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 13:32:04 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS THE BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of str      : " << &str << std::endl;
    std::cout << "Memory address in stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address in stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Value of str              : " << str << std::endl;
    std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF        : " << stringREF << std::endl;
    return (0);
}
