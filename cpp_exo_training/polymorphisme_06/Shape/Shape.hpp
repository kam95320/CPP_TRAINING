/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:23:38 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 17:55:47 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_HPP
# define SHAPE_HPP
# include <iostream>
# include <string>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"

class Shape
{
  protected:
	int side;
	int radius;
	int width;
	int height;

  public:
	virtual void draw() const = 0;
	virtual double area() const = 0;
	int get_side(int new_side);
	int  get_radius(int new_radius);
	int get_widht(int new_widht);
	int get_height(int new_height);
	
};
#endif