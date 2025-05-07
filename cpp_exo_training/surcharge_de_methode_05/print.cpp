/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:56:26 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 14:23:32 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Print.hpp"

Print ::Print()
{
	std::cout << GREEN << "[constructeur initilize]" << RESET << std::endl;
}

Print ::~Print()
{
	std::cout << RED << "[constructeur reset]" << RESET << std::endl;
}
void Print::set_print(std::string new_print)
{
	if (new_print.empty())
	{
		std::cout << RED << "print is empty" << RESET << std::endl;
		return ;
	}
	printing = new_print;
}

std::string Print::get_print() const
{
	return (printing);
}

void Print::set_level(int new_level)
{
	if (new_level < 0)
	{
		std::cout << RED << "level is invalid" << RESET << std::endl;
		return ;
	}
	level = new_level;
}

int Print::get_level() const
{
	return (level);
}

void Print::printer()
{
	std::cout << RED << "Rien à imprimer" << RESET << std::endl;
}

void Print::printer(std ::string new_massage)
{
	Print ::set_print(new_massage);
	std::cout << GREEN << Print ::get_print() << RESET << std::endl;
}
void Print ::printer(std::string new_message, int new_level)
{
	Print::set_print(new_message);
	Print::set_level(new_level);
	std::cout << GREEN << get_print() << RESET << ORANGE << " and " << RESET << CYAN << "level: " << RESET << GREEN << get_level() << RESET << std::endl;
}

void Print::display(std::string new_printing, int new_level)
{
	if (new_printing.empty() && new_level == 0)
	{
		Print::printer();
		return ;
	}
	if (!new_printing.empty() && new_level == 0)
	{
		Print::printer(new_printing);
		return ;
	}
	if (!new_printing.empty() && new_level != 0)
	{
		Print::printer(new_printing, new_level);
		return ;
	}
}