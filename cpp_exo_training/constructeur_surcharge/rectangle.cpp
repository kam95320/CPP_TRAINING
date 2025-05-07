/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:14:31 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/02 13:53:02 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rectangle.hpp"

Rectangle :: Rectangle()
{
    std:: cout << "constructeur initialize"<<std::endl;
}
Rectangle :: ~Rectangle()
{
    std:: cout <<CYAN<< "constructeur reset"<<RESET<<std::endl;
}

Rectangle :: Rectangle(int x): width(x), height(x)
{
    std::cout<<GREEN<<"rectangle initialize: "<< RESET<<ORANGE<<width<<RESET<<std::endl;
}

Rectangle :: Rectangle(int x, int y) : width(x), height(y)
{
    std::cout<<GREEN<<"abcisse initialize: "<<RESET<<ORANGE<<width<<RESET<<std::endl;
    std::cout<<GREEN<<"ordonne initialize: "<<RESET<<ORANGE<<height<<RESET<<std::endl;
}
void Rectangle :: display()
{
    std::cout<<GREEN<<"abcisse: "<<RESET<<ORANGE<<width<<RESET<<std::endl;
    std::cout<<GREEN<<"ordonne: "<<RESET<<ORANGE<<height<<RESET<<std::endl;
}


