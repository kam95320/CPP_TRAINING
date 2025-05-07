/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:44:15 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/06 12:13:48 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"User.hpp"


int main()
{
    User user;
    user.set_username("kamel");
    user.set_age(28);
    std::cout <<CYAN<<"Nom : "<<RESET<<GREEN<<user.get_username()<<RESET<<std::endl;
    std::cout<<CYAN<< "age : "<< RESET<<GREEN<<user.get_age()<<RESET<<std::endl;
    return(0);
}