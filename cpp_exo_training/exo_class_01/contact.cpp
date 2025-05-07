/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:53:21 by kahoumou          #+#    #+#             */
/*   Updated: 2025/04/24 16:00:38 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.HPP"

void Contact:: set_name(std ::string new_name)
{
    name = new_name;
}

void Contact::  say_hello()
{
    std:: cout <<"My name is " << name << "!"<< std:: endl;
}
