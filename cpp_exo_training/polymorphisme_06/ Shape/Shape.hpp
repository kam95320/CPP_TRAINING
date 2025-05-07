/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:23:38 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 17:33:04 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_HPP
# define SHAPE_HPP
# include <iostream>
# include <string>

class Shape
{
    public:
	virtual void draw() const = 0;
	virtual double area() const = 0;
}
#endif