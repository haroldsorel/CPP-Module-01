/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:58:49 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/30 16:58:50 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void    ft_replace(std::string search, std::string replace, std::ifstream &in, std::ofstream &out)
{
    std::string line;
    size_t      pos;

    while (std::getline(in, line))
    {
        while ((pos = line.find(search)) != std::string::npos && !search.empty())
        {
            line.erase(pos, search.length());
            line.insert(pos, replace);
        }
        out << line;
        if (!in.eof())
            out << std::endl;
    }
}

int main(int argc, char **argv)
{
    std::string     in_filename;
    std::string     out_filename;
    std::string     search;
    std::string     replace;
    std::ifstream   infile;
	std::ofstream   outfile;

    if (argc != 4)
    {
        std::cout << "Please enter 3 parameters." << std::endl;
        return (1);
    }
    in_filename = argv[1];
    search = argv[2];
    replace = argv[3];
    out_filename = in_filename + ".replace";

    //opening infile
    infile.open(in_filename);
    if (!infile)
    {
        std::cout << "inFile Error!" << std::endl;
        return (1);
    }

    //opening outfile
    outfile.open(out_filename);
    if (!outfile)
    {
        std::cout << "outFile Error!" << std::endl;
        return (1);
    }

    //replacing the text
    ft_replace(search, replace, infile, outfile);
    infile.close();
    outfile.close();
    return (0);
}
