/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:52:38 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/02 13:48:11 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP
# include <iostream>
# include <string>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"

class Rectangle
{
  private:
	int width;
	int height;

  public:
	Rectangle();
	Rectangle(int x);
	Rectangle(int x, int y);
    void display();
	~Rectangle();
};
#endif