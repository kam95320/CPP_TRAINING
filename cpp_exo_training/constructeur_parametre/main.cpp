/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:17:06 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/01 16:23:09 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

int	main(void)
{
	Student s1("Kamel", 21, "Informatique");
	Student s2("Ali", 23, "Maths");
	Student s3("Leïla", 22, "Physique");

	s1.display();
	s2.display();
	s3.display();
}