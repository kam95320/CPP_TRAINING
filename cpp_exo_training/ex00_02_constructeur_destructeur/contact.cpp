/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:08:31 by kahoumou          #+#    #+#             */
/*   Updated: 2025/04/25 11:16:57 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact ::Contact(const std::string &new_name) : name(new_name)
{
	std::cout << "contact " << name << " enregistred." << std::endl;
}

Contact ::~Contact()
{
    std::cout << "destroyed  contact " << name << std:: endl;
}
void Contact:: say_hello()
{
    std:: cout << "Contact is " << name << std::endl;
}
