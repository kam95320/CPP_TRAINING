/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:39:50 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/06 14:16:14 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"

User ::User()
{
	std::cout << GREEN << "[User created]" << RESET << std::endl;
}
User ::~User()
{
	std::cout << RED << "[User destroyed]" << RESET << std::endl;
}

std::string User::get_username() const
{
	return (username);
}

void User::set_username(const std::string &new_username)
{
	if (new_username.empty())
	{
		std::cout << RED << "name is empty" << RESET << std::endl;
        return;
	}
	username = new_username;
}

int User ::get_age() const
{
	return (age);
}

void User::set_age(const int &new_age)
{
	if (new_age < 0)
	{
		std::cout << RED << "age is empty" << RESET << std::endl;
        return;
	}
	age = new_age;
}
