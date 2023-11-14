/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:19:17 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/14 09:45:00 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string to_uppercase(std::string s)
{
    for (std::size_t i = 0; i < s.length(); ++i)
        s[i] = std::toupper(s[i]);
    return (s);
}

int	main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
            std::cout << to_uppercase(av[i]);
    }
    std::cout << std::endl;
    return (0);
}
