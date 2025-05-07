/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   admin.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:31:01 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/06 14:26:18 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Admin.hpp"

Admin ::Admin()
{
	std::cout << GREEN << "[Admin created]" << RESET << std::endl;
}
Admin ::~Admin()
{
	std::cout << RED << "[Admin destroyed]" << RESET << std::endl;
}
std ::string Admin::get_role() const
{
	return (role);
}

void Admin ::set_role(std::string new_role)
{
	if (new_role.empty())
	{
		std::cout << RED << "role  is  empty" << RESET << std::endl;
	}
	role = new_role;
}
void Admin::display_admin()
{
    std::cout<<RESET<<GREEN<<Admin :: get_username()<<RESET<<std::endl;
    std::cout<<CYAN<<RESET<<GREEN<<Admin :: get_age()<<RESET<<std::endl;
    std::cout<<CYAN<< "role : "<<RESET<<GREEN<<Admin :: get_role()<<RESET<<std::endl;
    
}
