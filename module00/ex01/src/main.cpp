/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:40:35 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/14 12:48:59 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.class.hpp"

int main(void)
{
    std::string user_input;
    // PhoneBook   MyPhoneBook;

    while (std::getline(std::cin, user_input))
    {
        std::cout << user_input << std::endl;
        if (user_input == "EXIT")
            break;
    }
    return (0);
}